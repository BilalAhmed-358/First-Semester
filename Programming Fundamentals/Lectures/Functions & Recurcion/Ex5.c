float add(float , float );
float sub(float , float );
float mul(float , float );
float div(float , float );
void print(){
	printf("Hello");
}
main(){
	
	float a, b, res;
	char op;
	printf("Enter the values of a, b and operation:	\n");
	scanf("%f %f %c", &a, &b, &op);
	switch(op){
	
		case '+':
			add(a,b);
			break; 
		case '*':
			res = mul(a,b);
			break;
		case '/':
			res = div(a,b);
			break; 
		case '-':
			res = sub(a,b);
			break; 
		}
		printf("Result is %f", res);
	
}

float add(float a, float b ){
	printf("Sum is %f : ",a+b);
	//return a+b;
}
float sub(float a, float b ){
	return a-b;
}
float mul(float a, float b ){
	return a*b;
}
float div(float a, float b ){
	return a/b;
	
}




