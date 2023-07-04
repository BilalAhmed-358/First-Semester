#include<stdio.h>

int main()
{
	int i,n;
	FILE *fp;
	fp=fopen("resident.dat","w");
	printf("Type the number of residents\n");
	scanf("%d",&n);
	
	struct Data
	{
		char name[20];
		int age;
		char city[20];
	}R[n];

	for(i=0;i<n;i++)
	{
		printf("Enter the name of resident %d\n",i+1);
		fflush(stdin);
		gets(R[i].name);
		printf("Enter the age of resident %d\n",i+1);
		scanf("%d",&R[i].age);
		printf("Enter the city of resident %d\n",i+1);
		fflush(stdin);
		gets(R[i].city);
	}
	fwrite(&R,sizeof(R),1,fp);
	fclose(fp);
	 fp=fopen("resident.txt","r");
    fread(R,sizeof(R),1,fp);
    for(i=0;i<n;++i)
    {
        printf("Name of resident %d is %s\n",i+1,R[i].name);
        printf("Age of resident %d is %d\n",i+1,R[i].age);
        printf("City of resident %d is %s\n",i+1,R[i].city);
    }
    fclose(fp);
	
}
