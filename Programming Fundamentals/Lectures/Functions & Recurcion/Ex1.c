#include <stdio.h>
int printpattern(char n) {
   if(n>='a') {
      printpattern(n-1);
      printf("%c",n);
   }
}
int pattern(char n) {
   if(n>'a') {
      pattern(n-1); //will recursively print the pattern
   }
   printpattern(n); //will reduce the n recursively.
   printf("\n"); //for new line
}
int main() {
   char n = 'e';
   pattern(n);
   return 0;
}
