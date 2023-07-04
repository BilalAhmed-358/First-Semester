#include <stdio.h>
void main()
{
   int akramAge, javaidAge, imranAge;
   printf("Enter the age of waseem, javed and imran\n");
   scanf("%d %d %d" , &akramAge, &javaidAge, &imranAge);
   //scanf("%d", &javaidAge);
   //scanf("%d", &imranAge);
   	if(akramAge < javaidAge && akramAge <imranAge)
   			printf("Waseem is youngest");
	else if(javaidAge < akramAge && javaidAge <imranAge)
   			printf("Javaid is youngest");
   //	if(imranAge < akramAge && imranAge <javaidAge)
   	else
	   		printf("Imran is youngest");
}
