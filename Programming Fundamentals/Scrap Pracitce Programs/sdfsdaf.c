#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void vowel_counter(char **ptr_double, int len)
{
  int i = 0, j = 0, count = 0, word = 0;
  for (i = 0; i < len; i++)
  {
    if ((*(*ptr_double + i)) != ' ' && (*(*ptr_double + 1 + i)) == ' ')
      word = word + 1;
  }
  word++;
  printf("The number of words is %d\n", word + 1);
  for (i = 0; i < word; i++)
  {
    count = 0;
    for (j; j < len; j++)
    {
      if (*(*ptr_double + j) == 32)
      {
        j++;
        break;
      }
      //printf("this\n");
      if (*(*ptr_double + j) == 'a' || *(*ptr_double + j) == 'e' || *(*ptr_double + j) == 'i' || *(*ptr_double + j) == 'o' || *(*ptr_double + j) == 'u')
        count++;
    }
    printf("The nubmer of vowels in word no.%d are %d\n", i + 1, count);
  }
}
int main()
{
  int len, i;
  char sentence[100];
  char temp;
  char *ptr = sentence, **ptr_double = &ptr;
  printf("Enter a sentence\n");
  fflush(stdin);
  gets(*ptr_double);
  //puts(*ptr_double);
  len = strlen(*ptr_double);
  if (*(*ptr_double + 1) == 's')
    printf("yes");
  vowel_counter(ptr_double, len);
}
