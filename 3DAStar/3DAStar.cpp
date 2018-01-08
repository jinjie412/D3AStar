// 3DAStar.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Star.h"
#include <iostream>
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	Star star;
	star.findpath();
    system("pause");
	return 0;
}

