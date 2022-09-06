#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX 999983

void sieve(vector<int>& out)
{
  vector<bool> isNotPrime(MAX + 1, false);
  isNotPrime[0] = isNotPrime[1] = true;
  for (int i = 2; i <= MAX; i++)
  {
      if (!isNotPrime[i])
      {
          out.push_back(i);
          for (int j = 2 * i; j <= MAX; j += i)
          {
              isNotPrime[j] = true;
          }
      }
  }
}

int numberOfPrimes(int a, int b, const vector<int>& s)
{
    return upper_bound(s.begin(), s.end(), b) - lower_bound(s.begin(), s.end(), a);
}

int main()
{
  vector<int> s;
  s.reserve(78498);
  sieve(s);

  int t;
  scanf("%d", &t);
  while (t--)
  {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", numberOfPrimes(a, b, s));
  }
  return 0;
}
