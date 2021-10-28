    #include<bits/stdc++.h>
        #define c cout
        #define nl endl
        #define ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        using namespace std;
        int main()
        {
            ios
            int arr[100000],n,i,j,count=0;
            cin>>n;
            for(i=0;i<n;i++){
                cin>>arr[i];
            }
            for(i=0;i<n;i++){
                if(arr[i]!=arr[i+1])
                    count++;
            }
            c<<count<<nl;
     
            return 0;
        }
