#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
  * generate a random number and
  * print if positie or negative 
  *
  * Return: Always 0 (Success)
 */

int main(void)
{
      int n,
      srand(time(0)); // seed random number in curent time 
      n = rand() - RAND_MAX/2;

      if (n > 0)
	      printf("%d is positive\n", n);
      else if (n < 0)
	      printf("%d is negative\n", n);
      else if (n == 0)
	      printf("%d is zero\n ", n);

      retur(0);
}
            
