#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	int *p;
	int b=0;
	printf("Enter any string :- ");
	scanf("%[^\n]",&a);
	b=strlen(a);
	p=&b;
	printf("Your string length :- %d",*p);
}

