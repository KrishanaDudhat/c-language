#include<stdio.h>
main()
{
	int n;
	printf("Enter the array's size:- ");
	scanf("%d",&n);
	
	int a[n],i;
	int *p;
	
	p=&a;
	
	printf("Enter array's elements:- \n");
	for(i=0;i<n;i++)
	{
			printf("a[%d]:- ",i);
		scanf("%d",p + i);
	}
	printf("Square of each element:- \n");
		for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i)**(p+i));
	}
}
