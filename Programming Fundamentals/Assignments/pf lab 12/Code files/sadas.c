#include<stdio.h>
#include<string.h>
int main()
   
{  
    int del_line,no_of_lines=0;
    char fname[50],str[50];
    char ch,cha;
	FILE *fp1,*fp2;
	printf("Enter the file name from which u want to delete a line\n");
	scanf("%s",&fname);
	fp1=fopen("File.txt","r");
	if(fp1==NULL)
	{
		printf("Error loading file\n");
		
	}
	printf("Contents before deleting\n");
	

	while((ch=fgetc(fp1))!=EOF)
	{
		printf("%c",ch);
		
	}
    rewind(fp1);
	printf("\nEnter the no. of the line that u want to delete\n");
	scanf("%d",&del_line);

    fp2=fopen("New file.txt","w");
	while(fgets(str,49,fp1)!= NULL)
	{    
	     no_of_lines++;
		if(no_of_lines!=del_line)
		{
			fputs(str,fp2);
		}
	}
	fclose(fp1);
	fclose(fp2);
	
	remove("File.txt");
	rename("New file.txt","File.txt");
	
	fp1=fopen("File.txt","r");
	printf("Contents after deleting");
	while((cha=fgetc(fp1))!=EOF)
	{
		printf("%c",cha);
		
	}
	fclose(fp1);
}
