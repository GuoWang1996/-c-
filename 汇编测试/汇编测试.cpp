// A014.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<Windows.h>
#include<stdio.h>
using namespace std;
int callret(int abc) 
{
	int c = 1;
	return abc +c+ 0x123456;

}
#pragma pack (2)
struct 人物对象
{
	
	char B;
	DWORD C;
	int D;
};

//int main()
//{
//	人物对象 xiaoMing[2] = { {1, 2, 3},{4, 5, 6} };
//	//人物对象 *a;
//	//a = &xiaoMing;
//	//printf("%p %p %p ", &a->B, &a->C, &a->D);
//
//	//char a[6] = {'H','e','l','l','0'};
//	printf("");
//}
