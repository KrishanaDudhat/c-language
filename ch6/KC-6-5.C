#include<stdio.h>
#include<conio.h>
main()
{
    int n,a,b;
    clrscr();
    printf("Enter Starting Year\t:");
    scanf("%d",&a);
    printf("Enter Ending Year\t:");
    scanf("%d",&b);
    while(a<=b)
    {
	 if(a%4==0)
	{
		printf("%d\n",a);
	}
		a++;
    }
    getch();

}