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

# 配置

1. [mingw64 安装包: x86_64-14.2.0-release-win32-seh-msvcrt-rt_v12-rev0.7z](https://github.com/niXman/mingw-builds-binaries/releases)
   这里选择合适版本时需要注意。我选了 win32-seh 的版本，为了兼容 easyx，同时 easyx 要选 easyx4mingw 版本。
   并且配置 easyx4mingw 时需要把 easyx 的 include 和 lib 在 mingw64 的 32 位路径和 64 位路径都复制过去，才能跑通
2. [easyx 安装包: easyx4mingw_20240601.zip](https://codebus.cn/bestans/easyx-for-mingw)
3. [cmake 安装包: cmake-3.31.1-windows-x86_64.zip](https://cmake.org/download/) 找合适的般本安装即可
4. [SymEngine：快速符号运算库的下载与安装教程](https://blog.gitcode.com/7a17cc810c297fd6c9a075fccfb9cbd9.html) 安装 SymEngine
