
#include <iostream>
#include<Windows.h>
#include<stdio.h>
struct �������
{
	int Ѫ��;
	int �ȼ�;
	DWORD ����;
	������� *p;
};

DWORD findW(������� *p)
{
	if (p!=0)
	{
		std::cout <<"�ȼ���"<< p->�ȼ�;
		std::cout << "������" << p->����;
		std::cout << "Ѫ����" << p->Ѫ��;

		findW(p->p);
	}
	return 0;
}
int main()
{
	������� p1 = { 100,2,100,0 };
	������� p2 = { 300,4,300,0 };
	������� p3 = { 500,5,500,0 };
	
	p1.p = &p2;
	p2.p = &p3;
	findW(&p1);
}