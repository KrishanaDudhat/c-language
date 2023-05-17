#include<stdio.h>
#include<conio.h>

main()
{
	int i,n ,j;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	printf("Table of %d: \n",i);
	      for(int j=1; j<=10;j++)
	      {
		  printf("%d * %d = %d \n",i,j,i*j);
	      }
	      printf(" \n");

	}
	getch();	
}


