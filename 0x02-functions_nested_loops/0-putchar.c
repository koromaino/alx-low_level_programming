#include <stdio.h>
/** main - prints putchar
 * Return: Always 0
 */
int main () {
   char ch;

   for(ch = 'A' ; ch <= 'Z' ; ch++) {
      putchar(ch);
   }
   
   return(0);
}
