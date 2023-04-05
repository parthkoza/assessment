#include<stdio.h>
int add (int a , int b);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int c=add(a,b);
	printf("%d",c);
	return 0;
}
int add ( int a, int b)
{
	int c;
	c=a+b;
	return a+b;
}
