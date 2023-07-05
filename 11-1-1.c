#include<stdio.h>
main()
{
	int n;
	printf("Enter the array's size:- ");
	scanf("%d",&n);
	
	int a[n],i;
	int *p;
	
	p=&a;
	
	printf("---------------------------\n");
	printf("Enter array's elements:-\n");
	for(i=0;i<n;i++)
	{
		printf("\t\t\ta[%d]:- ",i);
		scanf("%d",&a[i]);
	}
	printf("---------------------------\n");
		for(i=0;i<n;i++)
	{
		printf("Square of %d :-> %d \n",*(p+i),*(p+i)**(p+i));
	}
	printf("---------------------------\n");
}
