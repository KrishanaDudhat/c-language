#include<stdio.h>
#include<conio.h>
main()
{
    int n,i=1;
    clrscr();
    printf("Enter a number :");
    scanf("%d",&n);
    while(n>=i)
    {
	if( n%i==2)
	{
		printf(" Prime Number.....");
	       break;
	}

	i++;

    }

    getch();

}
