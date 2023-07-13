#include<stdio.h>
void main()
{
	FILE *fp1, *fp2;
	int a;
	
	fp1 = fopen("D:\\krishana3992\\k.txt","r");
	fscanf(fp1,"%d",&a);
	fclose(fp1);
	
	printf("Read content from one file:- %d",a);
	
	fp2 = fopen("D:\\krishana3992\\k2.txt","w");
	fprintf(fp2,"%d",&a);
	fclose(fp1);

	
} 	
