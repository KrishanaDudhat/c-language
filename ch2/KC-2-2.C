#include<stdio.h>
#include<conio.h>
main()
{
int r=2,l=4,b=2,h=2;
float  a=.3,d=.4,c=.5;
float Pi=3.14;
clrscr();
printf("Area of circle\t : %.2f*%d*%d=%f\n",Pi,r,Pi*r*r);
printf("Area of square \t:%d*%d=%d\n",l,l,l*l);
printf("Area of triangel:%.1f*%.1f/%.1f=%.1f\n",a,d,c,a*d*c);
printf("Area of rectengle :%d*%d*%d=%d\n",l,b,h,l*b*h);
getch();
}
