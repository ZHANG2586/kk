// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once    //为了避免同一个头文件被包含（include）多次，C/C++中有两种宏实现方式：一种是#ifndef方式；另一种是#pragma once方式(但是pragam  once 只是看文件是否被重复调用，不管内内容是否一样)

#include "targetver.h"    //定义程序运行的环境，如限制程序只能在XP下运行，限制程序在只能在Vin7下运行，或限制程序只能在XP以上系统运行,或限制程序只能在Server2003以上系统运行..

#include <stdio.h>
#include <tchar.h>    //为了存储这样的通用字符，就有了TCHAR。(这样就可以很好的切换宽窄字符集。tchar可用于双字节字符串，使程序可以用于中日韩等国 语言文字处理、显示。使编程方法简化 )



// TODO:  在此处引用程序需要的其他头文件
