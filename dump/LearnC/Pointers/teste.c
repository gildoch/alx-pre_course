#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   
   printf("Value of 'c' %c\n", c);
   printf("address of 'c' %p\n", &c);
   printf("Value of 'p' %c\n", p);
   printf("Address of 'p' %p\n", &p);
   modif_my_char_var(p, c);
   
   printf("Value of 'p' %c\n", p);
   printf("Address of 'p' %p\n", &p);
   return (0);
}
