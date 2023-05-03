#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,ans;
    clrscr();
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    ans=(a*a*a)+(b*b*b)+(3*a*b*a+b);
    printf(" ans=%d",ans);
    getch();
}