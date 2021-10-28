    #include<bits/stdc++.h>
    using namespace std;
    #define e endl;
    void optimize(){ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
    int main()
    {
        optimize();
        int t;
        cin>>t;
        while(t--){
            int n,k;
            cin>>n>>k;
            vector<int>a(n),b(n);
     
            for(int i=0;i<n;i++)cin>>a[i];
            for(int i=0;i<n;i++)cin>>b[i];
     
            sort(a.begin(),a.end());
            sort(b.rbegin(),b.rend());
     
            for(int i=0;i<n;i++){
                if(k!=0 && a[i]<b[i]){
                    swap(a[i],b[i]);
                    k--;
                }
            }
            int sum=0;
            for(int i=0;i<n;i++)sum+=a[i];
            cout<<sum<<e;
     
        }
        
     
        return 0;
    }
