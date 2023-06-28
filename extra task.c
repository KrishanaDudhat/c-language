#include<stdio.h>
int input()
{
	int d;
	printf("enter n:-");
	scanf("%d",&d);
	return d;
}
int min(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Array a[%d]:- ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{	
		if(i<n)
		{	
 			if(a[i] < a[i+1])
 			{
 				a[i]=a[i]+a[i+1];
 				a[i+1]=a[i]-a[i+1];  
 				a[i]=a[i]-a[i+1];
			 }
		}
	}
	return a[i];
}
 main(){
	int b,v,n;
	b=input();
	int a[n];
	min(a,n);
	v=min(a,n);
	printf("Array:-%d",v);
}
