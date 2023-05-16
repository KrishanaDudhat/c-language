#include<stdio.h>
#include<conio.h>
main()
{
    int n,i=1;
    clrscr();
    printf("Enter a number :");
    scanf("%d",&n);
    while(i<=n)
    {
	if( n%11==0)
	{
		printf(" Palindrom Number..........");
		break;
	}
	else
	{
		printf("non Palindrom Number.......... ");
	}

	n++;
	break;
    }

    getch();

}
