    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
     
                int i,l,m=0,n=0;
                cin>>l;
                char k[l];
                for(i=0;i<l;i++){
                    cin>>k[i];
                    if(k[i]=='A')
                    m++;
                    else if(k[i]=='D')
                    n++;
                }
                (m>n)?cout<<"Anton"<<endl:((n>m)?cout<<"Danik"<<endl:cout<<"Friendship"<<endl);
     
                return 0;
    }

