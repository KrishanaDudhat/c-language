#include<stdio.h>
#include<conio.h>
main()
{
    int i=1,n;
    clrscr();
    printf("Enter Number of table :");
    scanf("%d",&n);
    while(i<=10)
    {
	printf("Table: %d *%d :%d\n",n,i,n*i);
	i++;
    }
    getch();

}
