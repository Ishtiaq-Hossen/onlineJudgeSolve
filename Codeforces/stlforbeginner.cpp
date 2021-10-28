#include<bits/stdc++.h>
using namespace std;
#define c cout
#define nl "\n"
#define REP(i,a,b) for(int i=a;i<b;i++)
int main()
{
    //initializing data
    string m;
    int k=0;

    //taking input
    cin>>m;
    //soring 
    sort(m.begin(),m.end());

    REP(i,0,m.size()){       
            if(m[i]!=m[i+1])
            {
                k++;
            }        
    }
    if(k%2==0)
        c<<"CHAT WITH HER!"<<nl;
    
    else
    
        c<<"IGNORE HIM!"<<nl;
    
    
    return 0;

}
