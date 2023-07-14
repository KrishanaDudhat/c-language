#include<stdio.h>
#include<string.h>

struct standard{
	int a;
	int b;
	int c;
	int d;
	char n[20];
};
 
main()
{
	struct standard s[5];
	int i,e[5];
	float per[5];
	FILE *fp;
	fp = fopen("marksheet.txt","w");
	
	for(i=0;i<2;i++)
	{
		printf("Enter %dst stduent......\n",i+1);
		printf("Roll No:- ");
		scanf("%d",&s[i].a);
		printf("Name:- ");
		scanf("%s",&s[i].n);
		printf("chemistry:- ");
		scanf("%d",&s[i].b);
		printf("Mathematics:- ");
		scanf("%d",&s[i].c);
		printf("Physics:- ");
		scanf("%d",&s[i].d);
	}
	fprintf(fp,"Name\tChemistry\tMathematics\tPhysics\tTotal\tPercentage\n");
	for(i=0;i<2;i++)
	{
		e[i]=s[i].b + s[i].c + s[i].d;
		per[i] = e[i]/3;	
		
		fprintf(fp,"%s(%d):-\t%d\t\t%d\t%d\t%d/300\t%.2f\n",s[i].n,s[i].a,s[i].b,s[i].c,s[i].d,e[i],per[i]);
	}
	
	fclose(fp);
}
