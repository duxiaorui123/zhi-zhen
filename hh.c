# include <stdio.h>

void f(int* p)
{
	*p = 5;
}
int main(void)
{
	int i = 1;

	printf("i = %d\n", i);
	f(&i);
	printf("i = %d\n", i);

	return 0;
}