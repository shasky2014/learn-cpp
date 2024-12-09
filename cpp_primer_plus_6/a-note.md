1. - 参数 argument 实参：传递给函数的值被称为实参；
   - 参数 parameter 形参：函数定义时，在括号中声明的变量，称为形参；
   - reference parameters : 引用形参，引用参数，在函数里的形参使用&引用
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

## Q&A

Q: 如何在 vscode 使用 c++23 开发编译程序？

A: 想使用 c++23 的特性，需要使用 g++ 14.2.0 以上版本，并且需要使用 g++ 的最新版本，在 vscode 中，需要配置好 c_cpp_properties.json 文件，在 tasks.json 中配置好编译命令，在 launch.json 中配置好调试命令，在 settings.json 中配置好 c++ 标准版本。
目前的 g++ 14.2.0 依然不能完全的实现 c++23 的特性，比如 import 相关的编译，或者是我还不会使用 import 特性？

Q: 如何在 vscode 中使用 msvc 编译 c++23 程序？

A: 配置成了，在目录[[msvc-conf](../msvc-conf)]中，可以直接通过这里面的配置文件来用 msvc 编译 c++23 程序。
