#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    printf("Enter c :");
    scanf("%d",&c);
    (a<b)
	 ?(a<c)
		?printf("a is minimum")
		:printf("c is minimum")
	 :(b<c)
		?printf("b is minimum")
		:printf("c is minimum");
    getch();

}
