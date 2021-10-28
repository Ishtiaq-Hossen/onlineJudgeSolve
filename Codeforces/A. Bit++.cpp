    #include<bits/stdc++.h>
    using namespace std;
    #define c cout
    #define nl "\n"
    #define REP(i,a,b) for(int i=a;i<b;i++)
    int main()
    {
        typedef int in;
        in k,k1=0;
        char x[3];
        cin>>k;
     
        REP(i,0,k){
            REP(i,0,3){
                cin>>x[i];
            }
            if(x[0]=='X')
            {
                if(x[1]=='+')
                    k1++;
                else{
                    k1--;
                }
            }
            else if(x[0]=='+'){
                k1++;
            }
            else if(x[0]=='-'){
                k1--;
            }
        }
     
        c<<k1<<nl;
        return 0;
     
    }

