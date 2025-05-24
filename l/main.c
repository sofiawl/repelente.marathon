#include <math.h>
#include <stdio.h>

int
main ()
{
  long mb, qubits;

  scanf ("%ld", &mb);

  qubits = ceil (log2 (mb * 8000000));

  printf ("%ld\n", qubits);

  return 0;
}
