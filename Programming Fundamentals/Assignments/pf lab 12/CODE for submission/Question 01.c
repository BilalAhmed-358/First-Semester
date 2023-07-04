#include<stdio.h>
#include<string.h>

int main()
{
	int n,i;
	char sname[50];
	float smarks;
	printf("Enter the no of students u want to enter data of\n");
	scanf("%d",&n);
	FILE *fp;
	fp=fopen("Student record.txt","w");
	fprintf(fp,"Students Record\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the name of student %d\n",i+1);
		fflush(stdin);
		gets(sname);
		printf("Enter the marks of student %d\n",i+1);
		scanf("%f",&smarks);
		
		fprintf(fp,"Student %d name: %s\n",i+1,sname);
		fprintf(fp,"Student %d marks: %f\n",i+1,smarks);
	}
	fclose(fp);
	
}
