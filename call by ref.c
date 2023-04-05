#include<stdio.h>
void swap(int *x, int *y);
int main()
{
	int a=70,b=10;
	printf("before swapping value of a and b is %d,%d\n",a,b);
	swap(&a,&b);
	printf("after swapping value of a and b is %d,%d\n",a,b);
	return 0;
	
}
void swap (int *a, int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

