//	float add(float , float );
	float add(float a,float b)
		{
			a = 5;
			b = 10;
			return a+b;
		}
	void main(void)
		{
			float a=5.5,b=6.1,c;
			//int i;
			//printf("HEllo");
			//for (i =1 ; i <= 10; i++){
			
			float sum = add(11, 5);
			printf("%f\n", sum);
			printf("value of a and b inside main is %f %f", a,b);
			//beep();
		}


