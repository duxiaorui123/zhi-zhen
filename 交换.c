///*
//	形参和实参不同，若要使两者产生关联，必须借用指针
//	借用指针可以使实参和形参相等，从而改变实参的值
//
//*/
//# include <stdio.h>
//
//int f(int*, int*);     //函数声明
//
//int main(void)
//{
//	int a, b;
//	a = 3;
//	b = 5;
//	f(&a, &b);         //调用函数
//	printf("a = %d,b = %d\n", a, b);
//
//	return 0;
//}
//
//int f(int* p, int* q)
//{
//	int t;
//	t = *p;
//	*p = *q;
//	*q = t;
//}