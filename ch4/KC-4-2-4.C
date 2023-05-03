#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,ans;
    clrscr();
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    ans=(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a);
    printf(" ans=%d",ans);
    getch();
}