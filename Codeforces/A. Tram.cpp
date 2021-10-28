#include<iostream>
using namespace std;
#define p printf
#define s scanf
int
main ()
{
  int a, b, n, man = 0, cap = 0;
  s ("%d", &n);
  
  while (n--)
    {
      s ("%d%d", &a, &b);
      man = (man - a) + b;
      if (cap < man)    cap = man;

    }
    
  p ("%d\n", cap);
  return 0;
}
