#include<stdio.h>
int main()
{
	float a,b,c,d,e,f;
	printf("Enter a value of a and b:");
	scanf("%f%f",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("Addition of a and b is:-%f",c);
	printf("\nSubstraction of a and b is:-%f",d);
	printf("\nMultiplication of a and b is:-%f",e);
	printf("\nAddition of a and b is:-%f",f);
	return 0;
}
