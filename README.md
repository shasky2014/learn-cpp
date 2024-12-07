#### c++学习

1. 网站：[C++ 语法基础](https://oi-wiki.org/lang/basic/)
2. 书本：c++ primer plus 第六版 中文版

#### 代码练习记录

#### 问题 1

1. 编译时，目标代码有 include 自己写的 h 文件，报错找不到想个 h 文件。

   答：

在 `.vscode/tasks.json` 中配置 g++命令中添加如下相关参数，让编译时 include 的目录增加配置中的路径

```

```
