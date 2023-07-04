long factorial(long num);
void main()
{ int i; //clrscr();
	for(i=1; i<=10; i++)
	   printf("%2d! = %ld \n ", i, factorial(i));
}
long factorial(long num)
	{
		if (num == 1)
			return(1);
    		else
			return( num * factorial(num-1) );
	}
