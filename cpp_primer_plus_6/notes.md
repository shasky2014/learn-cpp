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

Q: vscode 编译时, 目标代码有 include 自己写的 h 文件，报错找不到这个 h 文件

A: 在 `.vscode/tasks.json` 中配置 g++命令中添加如下相关参数，让编译时 include 的目录增加配置中的路径

```
...
   "-I",
   "${fileDirname}\\base",
   "-I",
   "${fileDirname}",
...
```

Q: 如何在 vscode 使用 c++23 开发编译程序？

A: 想使用 c++23 的特性，需要使用 g++ 14.2.0 以上版本，并且需要使用 g++ 的最新版本，在 vscode 中，需要配置好 c_cpp_properties.json 文件，在 tasks.json 中配置好编译命令，在 launch.json 中配置好调试命令，在 settings.json 中配置好 c++ 标准版本。
目前的 g++ 14.2.0 依然不能完全的实现 c++23 的特性，比如 import 相关的编译，或者是我还不会使用 import 特性？

Q: 如何在 vscode 中使用 msvc 编译 c++23 程序？

A: 配置成了，在目录[[msvc-conf](../msvc-conf)]中，可以直接通过这里面的配置文件来用 msvc 编译 c++23 程序。

Q: c++程序运行时，内部数据存储的方案有几种？

A: 主要有下面 4 种

1. 自动存储：在程序执行其所属代码块或函数时被创建，在函数执行结束后被销毁。在栈中保存，后进先出。
2. 静态存储：在程序执行期间都存在的存储方式。可以使用 static 关键字来声明，或者在函数外定义。
3. 动态存储: 使用 new 和 delete 管理器来分配和释放。在堆(自由存储空间)中保存，可能导致内存不连续，使得新分配内存的跟踪和关联更复杂。
4. 线程存储：在多线程环境下，每个线程都有自己的栈，每个线程都有自己的全局变量。使用关键字 thread_local 来声明。

Q: c++中，class A( string a, int b);初始化时 a 的值非常大，程序会如何处理这个初始化时的内存空间占用问题？

A:

Q: 怎么用 vscode 调试多文件的 c++程序

A: 参考[关于使用 VScode 进行 C/C++项目里多文件的调试](https://www.cnblogs.com/xiaml/articles/17425759.html)
h 文件可以不包含在-g 的文件列表中，但是 h 文件中包含的函数需要包含在-g 的文件列表中。

Q: cin.get(), cin.get(char _,int), cin.getline(char _,int), getline(cin, string)区别

A: 可参考[【C/C++基础】C++中 cin、cin.get()、cin.getline()、getline() 的区别](https://blog.csdn.net/weixin_54383080/article/details/133936141)

1.  cin.get()：从输入流中读取一个字符，并将其存储在变量中，但不包括换行符。
2.  cin.get(char \*,int)：从输入流中读取指定数量的字符，并将其存储在数组中。输入换行，结束当前输入，换行复会留在缓存区，此时 cin 有值，需要 cin.get()或 cin.getline()读取，才能进行下一步的输入。
3.  cin.getline(char \*,int)：从输入流中读取指定数量的字符，并将其存储在数组中。输入换行，结束当前输入，换行不会留在缓存区，此时 cin 无值。可以直接进行下一步的输入。
4.  getline(cin, string)：从输入流中读取一行文本，并将其存储在字符串中。输入换行，结束当前输入，换行不会留在缓存区，此时 cin 无值。可以直接进行下一步的输入。
5.  !cin
