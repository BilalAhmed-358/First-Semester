void main(){
	
	fibonacci( 5 );
}
long fibonacci( long n )
{
	if (n == 0 || n == 1)  // base case
    return n;
	else
    printf("%d ", fibonacci( n - 1) +     fibonacci( n – 2 ));
}

