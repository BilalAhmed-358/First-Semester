#include<stdio.h>
int main(){
	void *ptr;
	int int_input;
	char char_input;
	float float_input;
	printf("Enter Integer Variable");
	scanf("%d",&int_input);
	printf("Enter Char Variable");
	scanf(" %c",&char_input);
	printf("Enter Float Variable");
	scanf("%f",&float_input);
	
	ptr=&int_input;
	printf("Value of The Integer Variable = %d\n",*(int *)ptr);
	printf("Address of The Integer Variable = %p\n",(ptr));
	
	ptr=&char_input;
	printf("Value of The Character Variable = %c\n",*(char *)ptr);
	printf("Address of The Char Variable = %p\n",(ptr));
	
	ptr=&float_input;
	printf("Value of The Float Variable = %.2f\n",*(float *)ptr);
	printf("Address of The Float Variable = %p\n",(ptr));	
}

