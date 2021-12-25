#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
 int c;
 float d,e;

 cin >> c>>d;

 e = ((d/12)*c);

 cout <<showpoint<<fixed<<setprecision(3)<<e<<endl;

 return 0;
}

