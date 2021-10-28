#include <bits/stdc++.h>
using namespace std;
#define p printf
#define s scanf
int main ()
{
  int a;
  int count = 0;
  s ("%d", &a);
  if (a >=5)
    {
      count = a / 5;
      if(a%5==0)p("%d\n",count);
      else p("%d\n",++count);
    }
  else
    {
      count++;
      p ("%d\n", count);
    }


  return 0;
}
