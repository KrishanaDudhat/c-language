#include<stdio.h>
#include<string.h>
int arraype(char str1[20],char str2[20])
{
	int com=0;
	
	strcpy(str2,str1);
	
	strrev(str2);
	
	com =strcmp(str1,str2);
	
	
	return com;
	
	
}
void main()
{
    char str1[20],a,str2[20];
    
    printf("enter any string what you want:- ");
    scanf("%s",&str1);
    
    
    a = arraype(str1,str2);
    
    	if(a == 0)
	{
		printf("This is palindrome......");
	}
	else
	{
		printf("This is non palindrome........");
	}
    
    
}


