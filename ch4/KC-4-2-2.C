#include<stdio.h>
#include<conio.h>
main()
{
    int p,r,t;
    float ans;
    clrscr();
    printf("Enter p:");
    scanf("%d",&p);
    printf("Enter r:");
    scanf("%d",&r);
    printf("Enter t:");
    scanf("%d",&t);
    ans=(p*r*t)/100;
    printf("ans=%f",ans);
    getch();
}
