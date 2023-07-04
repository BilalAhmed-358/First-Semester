#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch,fn[10];
	FILE *fp,*fp1;
	fp=fopen("text.txt","r");
	if(fp==NULL){
		printf("error");
		exit(1);
	}
	fp1=fopen("q6encry.txt","w");
	if(fp1==NULL){
		printf("error");
		exit(1);
	}
	ch=getc(fp);
	while(ch!=EOF){
		ch+=100;
		fputc(ch,fp1);
		ch=getc(fp);
	}
	fclose(fp);
	fclose(fp1);
	fp1=fopen("q6encry.txt","r");
	ch=getc(fp1);
	while(ch!=EOF){
		printf("%c",ch);
		ch=getc(fp);
	}
	fclose(fp);
}