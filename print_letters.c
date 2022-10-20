#include <stdio.h>

/**
* Printing small letters a to z
*/

int main(void)
{
char letters;
char alphabet;

for (letters ='a'; letters <='z'; letters++){

for (alphabet = 'A'; alphabet <='Z'; alphabet++)
  printf("%c %c \n", letters, alphabet);
 
}


putchar('\n');

return (0);
}
