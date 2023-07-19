#include<stdio.h>

main()
{
	int a[3][3],sum=0;
	
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]:- ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j ||(i==0 && j==2) ||(i==1 && j==1 )|| (i==2 && j==0))
			{
				printf("%d ",a[i][j]);
				sum+=a[i][j];
	    	}
	    	printf("\n");
	    }
	}
	
	printf("sum:- %d",sum);
	
}
