#include<stdio.h>

int main()
{   
    int count=0;
    char file;
    

	FILE *fp;
	fp=fopen("random.txt","r");
	if(fp==NULL)
	{
		printf("Error opening file");
		exit(1);
	}
	while(file=fgetc(fp)!=EOF)
	{
		if(file== '\n')
		count+=1;
	}
	fclose(fp);
	printf("The number of lines in the file are %d",count);
}
