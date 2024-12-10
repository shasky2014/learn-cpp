#### c++学习

1. 网站：[C++ 语法基础](https://oi-wiki.org/lang/basic/)
2. 书本：c++ primer plus 第六版 中文版

#### 代码练习记录

#### 问题 1

1. 编译时，目标代码有 include 自己写的 h 文件，报错找不到想个 h 文件。

   答：

在 `.vscode/tasks.json` 中配置 g++命令中添加如下相关参数，让编译时 include 的目录增加配置中的路径

```
                "-I",
                "${fileDirname}\\base",
                "-I",
                "${fileDirname}",
```

C:/Users/0000/AppData/Local/Programs/Microsoft VS Code/mingw64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/c++
C:/Users/0000/AppData/Local/Programs/Microsoft VS Code/mingw64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/c++/x86_64-w64-mingw32
C:/Users/0000/AppData/Local/Programs/Microsoft VS Code/mingw64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/c++/backward
C:/Users/0000/AppData/Local/Programs/Microsoft VS Code/mingw64/lib/gcc/x86_64-w64-mingw32/14.2.0/include
C:/Users/0000/AppData/Local/Programs/Microsoft VS Code/mingw64/lib/gcc/x86_64-w64-mingw32/14.2.0/include-fixed
C:/Users/0000/AppData/Local/Programs/Microsoft VS Code/mingw64/x86_64-w64-mingw32/include
