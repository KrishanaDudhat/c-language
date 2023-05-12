#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    clrscr();
    printf("Enter Ending Point\t:");
    scanf("%d",&n);
    while(n>=1)
    {
	 if(n%2==1)
	{
		printf("%d ",n);
	}
		n--;
    }
    getch();

}