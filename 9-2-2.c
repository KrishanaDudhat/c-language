#include<stdio.h>
main(){
	char pass1[40]="h^#zai5M",mail1[20]="dakogi8113@camplvad.com",mail2[20],pass2[20],cpy1,cpy2;
	printf("create your mail: ");
	gets(mail2);
	printf("create your password: ");
	gets(pass2);	
	cpy1= strcmp(mail1,mail2);
	cpy2= strcmp(pass1,pass2);
	if(cpy1==0 && cpy2==0)
	{
		printf("Login Successful.....");	
	}	
	else
	{
		printf("Login Failed.. Invalid Credentials..");
	}


}
