#include <stdio.h>
#include <string.h>
int main(){
	char str[50];
	char ch;
	int i,count=0;
	printf("\nEnter the string: ");
	gets(str);
	printf("\nEnter the character to find the frequency: ");
	scanf("%c",&ch);
	
	for(i=0;i<strlen(str);i++){
		if(str[i]==ch)
		count++;
		
	}
	printf("Frequency is: %d",count);
	
	
	
	
	
	
	
	return 0;
}
