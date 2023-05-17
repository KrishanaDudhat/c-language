#include<stdio.h>
#include<conio.h>

main()
{
	int i=1,n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	clrscr();
	do
	{
		if(i%2==0)
		{
			printf("%d is even number \n",i);
		}
		i++;
	} while(i<=n);
	getch();
}



