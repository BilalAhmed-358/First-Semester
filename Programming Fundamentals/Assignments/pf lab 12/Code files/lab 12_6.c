#include<stdio.h>
#include<string.h>
int main()
{   char fname[20];
	FILE *fp1,*fp2;
	char input,output;
    printf("Enter the name of the file that u want to Encrypt\n");
	gets(fname);
	fp1=fopen(fname,"r");
	if(fp1==NULL)
	{
		printf("Error opening file");
		
	}
	printf("Before Encryption\n");
	while((input=fgetc(fp1))!=EOF)
	{
		printf("%c",input);
	}
	fp2=fopen("New.txt","w");
	while((input=fgetc(fp1))!=EOF)
	{
		input+=100;
		fputc(input,fp2);
		
	}
	fclose(fp1);
	fclose(fp2);
	
	remove(fname);
	rename("New.txt",fname);
	FILE *fp3;
	fp3=fopen(fname,"r");
	printf("\nAfter Encryption\n");
	while((output=fgetc(fp3))!=EOF)
	{
		printf("%c",output);
	}
}
