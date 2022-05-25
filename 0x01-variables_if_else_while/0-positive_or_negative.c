#include <stdlib.h>
#include <time.h>
#inlude <stdio.h>

/**
 *main - Task 0 to display properties of a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    {
      print f("%d is positive/n", n);
    } else if (n == 0)
    }
print f ("%d is ero/n", n);
} else
    {
      printf("%d is negative\n", n);
    }

return (0);
}
