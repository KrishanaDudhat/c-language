#include<stdio.h>

main()
{
    int a,n,i=1,rem,rev;
   
    printf("Enter a number :");
    scanf("%d",&n);
    while(i<=n)
    {
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
    }
	if(a==n)
	{
		printf("Palindrom number.........");
	}
	else
	{
		printf(" non Palindrom number.........");
	}

}
