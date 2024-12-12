#include <easyx.h>
#include <conio.h>
#include <time.h>
#include <base.h>
#include <tchar.h>
#include <iomanip>
/*
画图，Julia集合
1.设置迭代次数 k 、收敛半径r 、次数 n 和常数 C ；\\
2.设置一个复数点集为初始点集 J，带入公式 Z_{k+1}={Z_k}^n+C 计算 Z_{k+1} ；\\
3.找出  |Z_{k+1}|<r 的点，记录这些点的位置矩阵 J ；\\
4.重复2、3步骤 k 次；\\
5.画出矩阵 J，即Julia集的图像。\\
*/
const float RATIO = 0.75;
const int WINDOWS_WIDTH = 1200;
const int WINDOWS_HEIGHT = WINDOWS_WIDTH * RATIO;
const float COMPLEX_RE_RANGE = 1.6;                      // (-1.6, +1.6)
const float COMPLEX_IM_RANGE = COMPLEX_RE_RANGE * RATIO; // (-1.2i, +1.2i)

template <typename T>
string toString(const T in_num, const int pre = 3)
{
    std::ostringstream out_str;
    out_str << std::setprecision(pre) << std::setiosflags(ios::fixed) << in_num;
    return out_str.str();
}
struct COMPLEX
{
    float re;
    float im;
};
COMPLEX operator*(COMPLEX a, COMPLEX b)
{
    COMPLEX c;
    c.re = a.re * b.re - a.im * b.im;
    c.im = a.im * b.re + a.re * b.im;
    return c;
}
COMPLEX operator+(COMPLEX a, COMPLEX b)
{
    COMPLEX c;
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    return c;
}

void draw_complex(COMPLEX c, COMPLEX z, int i, int j)
{
    if (WINDOWS_WIDTH * ((z.re - c.re) * (z.re - c.re) + (z.im - c.im) * (z.im - c.im)) < 0.2)
        putpixel(i, j, HSLtoRGB(1, 1, 1));
    return;
}

int main()
{
    COMPLEX cl[] = {{-0.75, 0},
                    {0, -0.1428},
                    {0.285, 0.01},
                    {-0.8, 0.156},
                    {-0.835, -0.2321},
                    {-1.2, 0},
                    {-1.5, -0.2321},
                    {-0.5, 1},
                    {-0.70176, -0.2321}};

    // 设置窗口大小
    initgraph(WINDOWS_WIDTH, WINDOWS_HEIGHT);
    settextstyle(20, 0, _T("等线"));
    ExMessage msg;
    // 绘制Julia Set
    COMPLEX zb, z, c;
    for (COMPLEX c : cl)
    {
        int i, j, k;
        for (i = 0; i < WINDOWS_WIDTH; i++)
        {
            for (j = 0; j < WINDOWS_HEIGHT; j++)
            {
                zb.re = z.re = -COMPLEX_RE_RANGE + (COMPLEX_RE_RANGE * 2) * (i / (float)WINDOWS_WIDTH);
                zb.im = z.im = COMPLEX_IM_RANGE - (COMPLEX_IM_RANGE * 2) * (j / (float)WINDOWS_HEIGHT);
                for (k = 0; k < 180; k++)
                {
                    z = z * z + c;
                    if (z.re * z.re + z.im * z.im > 4.0)
                    {
                        break;
                    }
                }
                putpixel(i, j, (k >= 180) ? 0 : HSLtoRGB((float)((k << 5) % 360), 1.0, 0.5));
                draw_complex(c, zb, i, j);
            }
        }
        string src = ((c.re >= 0) ? "C= " : "C=") +
                     toString(c.re) +
                     ((c.im >= 0) ? " +" : " ") +
                     toString(c.im) + " i  ";
        cout << src << endl;
        outtextxy(90, 30, _T(src.data()));
        outtextxy(90, 55, _T("按任意键继续..."));
        getmessage(&msg, EX_KEY);
        // cout << msg.prevdown << endl;
        if (msg.prevdown == 1)
            continue;
        else
            getmessage(&msg, EX_KEY);
    }
    outtextxy(90, 55, _T("按任意键结束."));
    getmessage(&msg, EX_KEY);
    if (msg.prevdown == 1)
        closegraph();
    else
        getmessage(&msg, EX_KEY);

    return 0;
}
