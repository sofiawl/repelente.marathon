#include <stdio.h>
#include <math.h>

static int
ehp (long x, long r)
{
  for (long i = 0; i < r; i++)
    {
      if ( ((x >> i) & 1) != ((x >> r) & 1) )
	return 0;

      r--;
    }

  return 1;
}

static long
rev (long x, long n)
{
  long revx = 0;
  long bit;

  long r = n;

  for (long i = 0; i <= n; i++)
    {
      bit = ((x >> r) & 1) << i;
      revx |= bit;

      r--;
    }

  return revx;
}

int
main ()
{
  long x, r, mr, mr2, up, down, revup;

  scanf ("%ld", &x);

  r = log2(x);

  if (!ehp (x, r))
    {
      mr = r/2 + 1;
      up = x >> mr;
      down = (up << mr) ^ x;
      
      if ((r+1) % 2)
	{
	  long h = log2 (down);
	  down ^= 1 << h;
	}

      revup = rev (up, mr - 1);

      printf ("up=%ld down=%ld revup=%ld\n", up, down, revup);

      while (revup > down)
	{
	  mr2 = mr;
	  up--;
	  mr = log2 (up);

	  if (mr < mr2)
	    {
	      printf ("%ld\n", (1L << r) - 1);
	      return 0;
	    }

	  revup = rev (up, mr);
	}

      x = 0;
      x |= (up << (mr + 1));
      x |= revup;
    }

  printf ("%ld\n", x);

  return 0;
}
