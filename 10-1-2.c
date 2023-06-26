#include<stdio.h>
void divi()
{
	int a;
	printf("Enter any number any you want:- ");
	scanf("%d",&a);
	
	if(a%3==0&&a%5==0)
	{
		printf("The given number is divisible by both 3 & 5.");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5.");
	}
}
void main()
{
	divi();
}
