#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
clrscr();
printf("Enter a=");
scanf("%d",&a);
printf("Enter b=");
scanf("%d",&b);
if(a<b)
{
printf ("Minimum %d",a);
}
else
{
printf (" Minimum %d",b);
}
getch();
}