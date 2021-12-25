#include<iostream>
using namespace std;
int main()
{
    int i,n,p=0,max=0;
    for(i=1;i<=100;i++)
   {
      cin>>n;
      if(max<n)
   {
    max=n;
    p=i;
   }
   }
   cout<<max<<endl;
   cout<<p<<endl;
    return 0;
}
