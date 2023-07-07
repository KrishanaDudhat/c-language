#include<stdio.h>
 void main()
 {
 	int n,i;
 	printf("Enter the array's size :");
 	scanf("%d",&n);
 	int a[n];
 	int *p1[n],*p2[n];
 	for(i=0;i<n;i++)
 	{
 		p1[i]=&a[i];
	 }
 	
 	printf("Enter array's element\n");
 	for(i=0;i<n;i++)
 	{
 		printf("a[%d]:",i);
 		scanf("%d",&a[i]);
	 }
 	 	for(i=0;i<n;i++)
 	{
 		p2[n-i-1]=&a[i];
	 }
	  	printf("Reversed array elements\n");

 	for(i=0;i<n;i++)
 	{
 		printf("a[%d]:%d\n",i,*p2[i]);
	 }
 	
 }
