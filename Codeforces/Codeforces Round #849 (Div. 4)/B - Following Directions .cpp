/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,n1;
    string s;
    cin>>n;
    while(n--)
    {
        bool check =false;
       int x=0,y=0;
       cin>>n1>>s;
       for(int i=0;i<n1;i++)
       {
           if(s[i]=='U')
           {
               y+=1;
               if(x==1 && y==1)
               {
                   printf("YES\n");
                   check=true;
                   break;
               }
           }
           else if(s[i]=='D')
           {
               y-=1;
               if(x==1 && y==1)
               {
                   printf("YES\n");
                   check=true;
                   break;
               }
           }
           else if(s[i]=='R')
           {
               x+=1;
               if(x==1 && y==1)
               {
                   printf("YES\n");
                   check=true;
                   break;
               }
           }
           else if(s[i]=='L')
           {
               x-=1;
               if(x==1 && y==1)
               {
                   printf("YES\n");
                   check=true;
                   break;
               }
           }
       }
       if(check==false)
       {
           printf("NO\n");
       }
    }

    return 0;
}
