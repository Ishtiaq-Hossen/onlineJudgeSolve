    #include<bits/stdc++.h>
        #define c cout
        #define nl endl
        #define ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        using namespace std;
        int main()
        {
            ios
            int n,k=0;
            string s;
            cin>>n>>s;
     
        	for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1])
                    k++;
            }
            c<<k<<nl;
     
     
            return 0;
        }
