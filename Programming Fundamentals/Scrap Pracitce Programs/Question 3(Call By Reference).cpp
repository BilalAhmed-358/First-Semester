#include<stdio.h>
#include<string.h>

int fun_strlen(char *array);
int fun_strcat(char *str1,char *str2);
int fun_strcpy(char *str1);
int fun_strncpy(char *str1,int *n);
int main(){
	int a;
	char array1[1000],str1[1000],str2[1000],str3[100],str4[100];
	printf("Function for Length Of Given String\n");
	printf("Enter The String\n");
	gets(array1);
	fun_strlen(&array1[0]);///call by reference
	printf("\n");
	
	printf("Function For Catenation of Two Strings\n");	
	printf("Enter First String");
	gets(str1);
	printf("Enter Second String");
	gets(str2);
	fun_strcat(&str1[0],&str2[0]);///call by value
	printf("\n");
	
	printf("Function For Copying  String\n");
	printf("Enter First String");
	gets(str3);
	fun_strcpy(&str3[0]);///call by value
	printf("\n");
	
	printf("Function For Copying String Upto N numbers\n");
	printf("Enter First String");
	gets(str4);
	printf("Enter N \n");
	scanf("%d",&a);
	fun_strncpy(&str4[0],&a);///call by value
	
}
int fun_strlen(char *array){
	int counter,i=0;
	for(;;i++){
		if(array[i]=='\0')
			break;
		else
			counter++;			
	}
	printf("Lenght is\n");
	printf("%d",counter);
}

int fun_strcat(char *str1,char *str2){
	int len_str1,len_str2,i;
	char res[1000];
	len_str1=strlen(str1);	
	len_str2=strlen(str2);
	
	for(i=0;i<=len_str2;i++){
		str1[len_str1]=str2[i];
		len_str1++;
	}
	printf("Concatinated String\n");
	puts(str1);
}

int fun_strcpy(char *str1){
	char str2[1000];
	int i,len_str1; 
	len_str1=strlen(str1);
	for(i=0;i<len_str1;i++){
		str2[i] = str1[i];
	}
	printf("String 2 which is a copy of string 1\n");
	puts(str2);
}
int fun_strncpy(char *str1,int *n){
	char str2[1000];
	int i,len_str1; 
	len_str1=strlen(str1);
	
	for(i=0;i<*n;i++){
		str2[i]=str1[i];
	}
	printf("String 2 which is a copy of string 1 to N \n");
	puts(str2);
}
