    #include<bits/stdc++.h>
    using namespace std;
    #define c cout
    #define nl endl
    int main()
    {
        int i,j,k,m,arr[5][5];
        for(i=0;i<5;i++){
            for(j=0;j<5;j++)
                cin>>arr[i][j];
        }
        for(i=0;i<5;i++){
            for(j=0;j<5;j++)
            {
                if(arr[i][j]==1){
                    k=i;
                    m=j;
                }
            }
        }
        k+=1;
        m+=1;
        if(k>3){
            k=k-3;
            if(m>3){
                m=m-3;
                k=k+m;
            }
            else if(m<3){
                m=3-m;
                k=k+m;
            }
            else{
                m=0;
                k=k+m;
            }
        }
        else if(k<3){
            k=3-k;
            if(m>3){
                m=m-3;
                k=k+m;
            }
            else if(m<3){
                m=3-m;
                k=k+m;
            }
            else{
                m=0;
                k=k+m;
            }
        }
        else{
            k=0;
            if(m>3){
                m=m-3;
                k=k+m;
            }
            else if(m<3){
                m=3-m;
                k=k+m;
            }
            else{
                m=0;
                k=k+m;
            }
        }
        c<<k<<nl;
        return 0;
    }

