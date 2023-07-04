#include <stdio.h>
#include <stdlib.h>
int main(){
	int i=0;
	char *ptr,input;
	ptr=(char*)calloc(1000,sizeof(char));
	printf("Enter a string\n");
	while(input = getchar())
	{   
	    if(input == '\n'||input == '\0')
	    	break;
	    else{
	        *(ptr+i)=input;
			i++;
			}
	        
	}
	i=0;
	printf("Entered String\n");
	while(1){
		if(*(ptr+i) == '\n'||*(ptr+i) == '\0')
	    	break;
	    else	
			printf("%c",*(ptr+i));
		i++;	
	}
	free(ptr);
}
