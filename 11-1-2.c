#include<stdio.h>
main()
{
	int n1,n2;
	printf("Enter the value of n1:- ");
	scanf("%d",&n1);
	printf("Enter the value of n2:- ");
	scanf("%d",&n2);
	
	
	int *p1,*p2;
	p1=&n1;
	p2=&n2;
	
	printf("------------------------:- ");
	
	printf("Before swapping: \n n1: %d \n n2: %d \n",*p1,*p2);
	
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	
	printf("------------------------:- ");
	
	printf("After swapping: \n n1: %d \n n2: %d ",*p1,*p2);	
}
