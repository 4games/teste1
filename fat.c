#include<stdio.h>

int fatorial(int num)
{
	if(num <= 1)
		return 1;
	else
		return num * fatorial(num - 1);
}

int main()
{
	printf("The value of the factorial is %d\n", fatorial(5));

	return 0;
}
