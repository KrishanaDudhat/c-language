#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if (a==b && b==c && c==a)
    {
	printf("All are same %d !!");
    }
    else if (a==b)
    {
	if(a<c)
	{
		printf("c is amall %d");
	}
	else
	{
		printf("a and b are small %d");
	}
    }
      else if (b==c)
    {
	if(b<c)
	{
		printf("a is small %d");
	}
	else
	{
		printf("b and c are small %d");
	}
    }
     else if (a==c)
    {
	if(a<b)
	{
		printf("b is small");
	}
	else
	{
		printf("a and c are small %d");
	}
    }
    else if (a>b)
    {
	if(a>c)
	{
		printf("a is small %d");
	}
	else
	{
		printf("c is small %d");
	}
    }
    else
    {
	if(b>c)
	{
		printf("b is small %d");
	}
	else
	{
		printf("c is small %d");
	}
    }
    getch();
}
