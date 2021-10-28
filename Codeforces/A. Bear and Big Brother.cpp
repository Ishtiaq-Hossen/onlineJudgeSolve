    #include<bits/stdc++.h>
    using namespace std;
    #define c cout
    #define nl endl
    int main()
    {
        int a,b,k=0;
        cin>>a>>b;
        while(a<=b){
            a=a*3;
            b=b*2;
            k++;
        }
        c<<k<<nl;
        return 0;
    }

