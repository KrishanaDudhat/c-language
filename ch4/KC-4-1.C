#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c;
  clrscr();
  printf("Enter A :-");
  scanf("%d",&a);
  printf("Enter B :-");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("A=%d\n B=%d",a,b);
  getch();
}
