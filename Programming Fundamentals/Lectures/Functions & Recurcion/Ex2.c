#include <stdio.h>

void foo()
{
    int a = 10;
    static int sa;
    a += 5;
    sa =10;
   	sa += 5;
	printf("a = %d, sa = %d\n", a, sa);
       
}
int main()
{
    int i;
    static int sa = 10;

    for (i = 0; i < 2; ++i)
        foo();
 	printf("sa in main %d", sa);
}
