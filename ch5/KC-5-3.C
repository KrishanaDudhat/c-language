#include<stdio.h>
#include<conio.h>
main()
{
int M;
clrscr();
printf("Enter Marks=");
scanf("%d",&M);
if(M>90 && M<100)
{
printf("A1");
}
else if(M>81 && M<90)
{
printf ("A2");
}
else if(M>71 && M<80)
{
printf ("B1");
}
else if(M>61 && M<70)
{
printf ("B2");
}
else if(M>51 && M<60)
{
printf ("C1");
}
else if(M>41 && M<50)
{
printf ("C2");
}
else if(M>31 && M<32)
{
printf ("D1");
}
else
{
printf ("Fail");
}

getch();
}