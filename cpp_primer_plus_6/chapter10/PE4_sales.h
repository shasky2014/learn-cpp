#ifndef SALSE_H_
#define SALSE_H_
namespace SALES
{
    class Sales
    {
    private:
        static const int QUARTERS = 4;
        int q_;
        double sales_[QUARTERS];
        double average_;
        double max_;
        double min_;
        void cas();

    public:
        Sales();
        ~Sales();
        Sales(const double ar[], int n = QUARTERS);
        void set();
        void show() const;
    };
}
#endif