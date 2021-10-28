    #include<bits/stdc++.h>
    using namespace std;
    #define c cout
    #define nl "\n"
    #define REP(i,a,b) for(int i=a;i<b;i++)
    int main()
    {
        int n;
        cin>>n;
        int a1[n];
        REP(i,0,n){
            cin>>a1[i];
        }
        sort(a1,a1+n);
        REP(i,0,n-1){
            
            c<<a1[i]<<" ";
        }
        c<<a1[n-1]<<nl;
        return 0;
     
    }
