    #include<bits/stdc++.h>
    using namespace std;
    #define c cout
    #define nl "\n"
    #define REP(i,a,b) for(int i=a;i<b;i++)
    int main()
    {
        typedef int in;
        string k,m;
        cin>>k>>m;
        REP(i,0,k.size())
        {
            k[i]=tolower(k[i]);
            m[i]=tolower(m[i]);
     
        }
        if(k==m)
            c<<"0"<<nl;
        else{
            REP(i,0,k.size())
            {
               if(k[i]<m[i]){
                c<<"-1"<<nl;
                break;
                }
                if(k[i]>m[i]){
                c<<"1"<<nl;
                break;
                }
            }
     
        }
     
        return 0;
     
    }

