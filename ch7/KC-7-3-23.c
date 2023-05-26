#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();
		for(i=65;i<=64;i++)
		{
			for(j=65;j<=i;j++)
			{
				printf("%c ",i);

			}
			printf("\n");
		}
	getch();
}
