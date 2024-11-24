# 编译运行说明

本项目编译运行使用makefile管理

## 依赖项

项目的图形化部分使用`QT5`开发，故需要QT5的有关依赖

C++基础开发有关依赖：
### make
```ASN.1
> make --version
GNU Make 4.4.1
Built for x86_64-pc-linux-gnu
Copyright (C) 1988-2023 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
```
### cmake
```ASN.1
> cmake --version                                                                  
cmake version 3.31.1

CMake suite maintained and supported by Kitware (kitware.com/cmake).
```
### g++
```ASN.1
> g++ --version                               
g++ (GCC) 14.2.1 20240910
Copyright (C) 2024 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
### clang
```ASN.1
> clang --version
clang version 18.1.8
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
```


## 环境

开发环境为:

```ASN.1
OS: Arch Linux x86_64 
Host: HP Pavilion Aero Laptop 13-be1xxx 
Kernel: 6.11.9-arch1-1 
DE: Plasma 6.2.3 
WM: KWin 
Theme: Breeze-Dark [GTK2], Breeze [GTK3] 
Icons: Colloid [GTK2/3] 
Terminal: konsole
```

移植测试环境为：



## 编译

打开项目根目录，在终端中运行：

```shell
make all
```

## 运行

在项目根目录运行：

```shell
make run
```

