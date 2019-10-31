///*
//	实参必须是该普通变量的地址
//	形参必须是指针变量
//*/
//# include <stdio.h>
//
//void g(int*, int*);
//
//int main(void)
//{
//	int a = 3, b = 5;
//	g(&a, &b);
//	printf("a = %d,b = %d\n", a, b);
//
//	return 0;
//}
//
//void g(int* p, int* q)
//{
//	*p = 1;
//	*q = 2;
//}