#include<stdio.h>
#include<string.h>
int my_strcat(char arr1[],char arr2[]){
	int i,j,k;
	char res[1000];
	i=strlen(arr1);	
	j=strlen(arr2);
	
	for(k=0;k<=j;k++){
		arr1[i]=arr2[k];
		i++;
	}
	printf("Concatinated String\n");
	puts(arr1);
}
int main()
{
    char arr1[1000],arr2[1000];
    printf("Enter the first string\n");
    gets(arr1);
    printf("Enter the second string\n");
    gets(arr2);
    printf("After concatenation\n");
    my_strcat(arr1,arr2);
}