#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("Enter a=");
scanf("%d",&a);
if (a>0)
{
printf("Positive");
}
else if(a==0)
{
printf ("neutral");
}
else
{
printf (" Negative");
}
getch();
}