#include<stdio.h>
#include<conio.h>

main()
{
	char i='a';
	clrscr();
	do
	{
		printf("%c ",i);
		i+=3;
		i++;
	}while( i<='z');
	getch();

}
