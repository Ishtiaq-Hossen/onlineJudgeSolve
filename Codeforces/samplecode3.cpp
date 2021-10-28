    #include<bits/stdc++.h>
    #define c cout
    #define nl endl
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
     
        int i,j;
        string s;
        cin>>s;
        for(i=0;i<s.size();i+=2){
            for(j=0;j<s.size()-1;j+=2){
                if(s[j]>s[j+2])
                    swap(s[j],s[j+2]);
            }
        }
        c<<s<<nl;
        
        return 0;
    }
