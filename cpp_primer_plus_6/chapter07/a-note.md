1. - 参数 argument 实参：传递给函数的值被称为实参；
   - 参数 parameter 形参：函数定义时，在括号中声明的变量，称为形参；
2. c++中函数使用有三个关键步骤：
   - 提供函数原型，在 main 方法之前定义，必需要有。可以省略原型中的形参名称，但必须提供类型，可以在原型后直接定义功能，但一般 c++先写 main 方法，main 包含整个程序的框架，所以这个一般不一定有用。
   - 给出函数功能定义，在 main 方法之后定义，或者在原型下直接定义，可以不单独存在。
   - 调用函数
3. 可以把函数 f1 的地址作为参数，在函数 f2 里使用 f1 对应的函数来进行运算

```c++
   double f1(double x) { return x * x; }
   double f2(double x) { return x * x; }
   double f3(double x) { return x * x; }
   double pf((*f1)(double),int);
   double pf((*f1[])(double),int);
```
