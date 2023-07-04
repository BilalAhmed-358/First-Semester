#include<stdio.h>
#include<string.h>

int main()
{

	char ssen[500];
	FILE *fp;
	fp=fopen("Sentence.txt","w");
	
	
		printf("Enter a sentence to store \n");
		fflush(stdin);
		gets(ssen);
		fprintf(fp,"The sentence entered by the user is written below\n %s",ssen);
		
	
	fclose(fp);
	
}
