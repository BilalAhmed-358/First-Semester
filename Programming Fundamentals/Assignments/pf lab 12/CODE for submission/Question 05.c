#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp,*fp1;
	char ch;
	int del,i=1;
	fp=fopen("Q5.txt","r");
	if(fp==NULL){
		printf("error");
		exit(1);
	}
	ch=getc(fp);
	while(ch!=EOF){
		printf("%c",ch);
		ch=getc(fp);
	}
	rewind(fp);
	printf("\nwhich line u want to delete: ");
	scanf("%d",&del);
	fp1=fopen("q5del.txt","w");
	if(fp1==NULL){
		printf("error");
		exit(1);}
		ch=getc(fp);
		while(ch!=EOF){
			if(ch=='\n'){
				i++;
			}
			if(i!=del)
			fputc(ch,fp1);
			ch=getc(fp);
		}
		fclose(fp);
		fclose(fp1);
		printf("after delete\n");
		fp=fopen("Q5del.txt","r");
		if(fp==NULL){
			printf("error");
			exit(1);
		}
		ch=getc(fp);
		while(ch!=EOF){
			printf("%c",ch);
			ch=getc(fp);
		}
		fclose(fp);
	
		}