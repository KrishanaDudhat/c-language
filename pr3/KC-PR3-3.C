#include<stdio.h>
#include<conio.h>
main()
{
	 int n,first,last,sum=0;
	 clrscr();
	 printf("Enter a number: ");
	 scanf("%d",&n);
	 first=n%10;
	 while(n>=10)
	 {
		n=n/10;
	 }
	 last=n;
	 sum=first+last;
	 printf("Sum of first and last digit =%d",sum);
	 getch();
}
