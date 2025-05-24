#include <iostream>
#include <numeric>

#define nl '\n'

using namespace std;

int
main ()
{
  cin.tie(0)->sync_with_stdio (0);

  int x, y, k, i;

  x = 1;

  cin >> y >> k;

  for (i = 0; ((x % y) != 0) && (i < k); i++)
    {
      x += std::gcd (x, y);
    }

  x += (k - i) * y;

  cout << x << nl;

  return 0;
}
