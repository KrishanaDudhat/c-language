#include<stdio.h>

main()
{
	int i;
	FILE *fp1,*fp2;
	fp1 = fopen("D:\\krishana3992\\pr9\\even.txt","w");
	fp2 = fopen("D:\\krishana3992\\pr9\\odd.txt","w");
	
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(fp1,"%d ",i);
		}
		else 
		{
			fprintf(fp2,"%d ",i);
		}
	}
	fclose(fp2);
	fclose(fp1);
}
