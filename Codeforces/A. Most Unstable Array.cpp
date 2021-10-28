    #include<bits/stdc++.h>
    using namespace std;
    #define e endl;
    void optimize(){ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
    int main()
    {
        optimize();
        int x,m,n;
        cin>>x;
        while(x!=0){
            cin>>n>>m;
            if(n==1){
                cout<<"0"<<e;
            }
            else if(n==2){
                cout<<m<<e;
            }
            else{
                cout<<(m*2)<<e;
            }
            x--;
        }
        
     
        return 0;
    }
