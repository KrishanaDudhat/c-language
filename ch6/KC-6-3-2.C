#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n,fact=1;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf(" %d ",i);
		fact*=i;
	}
	printf("\n\nFactorial = %d",fact);
	getch();
}