    #include<bits/stdc++.h>
    using namespace std;
    #define c cout
    #define nl endl
    int main()
    {
        int j,j1,i,l,k,m[50],n,max1=0,po,po1,ma;
        cin>>k;
     
        for(i=0;i<k;i++){
             cin>>m[i];
         }
        for(i=0;i<k;i++){
             l=m[i];
             if(l==1||l==2||l==3||l==4||l==5||l==6||l==7||l==8||l==9)
             {
                 c<<l<<nl;
                 
             }
             else{
                ma=0;
                for(j=1;j<10;j++){
                    for(j1=9;j1!=0;j1--){
                        n=j+j1;
                        if(n==l){
                            if(ma==0){
                                max1=n;
                                ma++;
                                po=j;
                                po1=j1;
                            }
                            else if(n<max1){
                                
                                max1=n;
                                
                                po=j;
                                po1=j1;
                                
                            }
                        }
                        
                        
                    }
                }
               if(ma==0){
                   c<<"-1"<<nl;
               }
               else{
                   c<<po<<po1<<nl;
               }
             }
         }
     
        return 0;
    }
