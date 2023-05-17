#include<stdio.h>
#include<conio.h>

main()
{       int a=0,b=1,c;
	int i,n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	clrscr();
	for(i=1;i<=n;i++)
	{
		printf(" %d \n",a);
		c=a+b;
		a=b;
		b=c;
	}
	getch();
}



