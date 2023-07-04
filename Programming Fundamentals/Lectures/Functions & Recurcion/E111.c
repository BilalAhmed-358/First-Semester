int main()
{
   int n, i = 0, c;
 
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++; 
   }
 
   return 0;
}
 
int Fibonacci(int n)
{
   if ( n == 0 )
      printf("%d ", 0);
   else if ( n == 1 )
      printf("%d ",1);
   else
      print("%d ", ( Fibonacci(n-1) + Fibonacci(n-2) ));
} 
