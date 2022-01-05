
#include <iostream>
#include<Windows.h>
#include<stdio.h>
struct 人物对象
{
	int 血量;
	int 等级;
	DWORD 蓝量;
	人物对象 *p;
};

DWORD findW(人物对象 *p)
{
	if (p!=0)
	{
		std::cout <<"等级："<< p->等级;
		std::cout << "蓝量：" << p->蓝量;
		std::cout << "血量：" << p->血量;

		findW(p->p);
	}
	return 0;
}
int main()
{
	人物对象 p1 = { 100,2,100,0 };
	人物对象 p2 = { 300,4,300,0 };
	人物对象 p3 = { 500,5,500,0 };
	
	p1.p = &p2;
	p2.p = &p3;
	findW(&p1);
}