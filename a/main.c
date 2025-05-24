#include <stdio.h>

int
main ()
{
  int c, g;

  scanf ("%d %d", &c, &g);

  if (c)
    printf ("vivo e morto\n");
  else
    {
      if (g)
        printf ("vivo\n");
      else
        printf ("morto\n");
    }

  return 0;
}
