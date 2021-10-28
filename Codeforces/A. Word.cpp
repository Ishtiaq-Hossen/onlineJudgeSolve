    #include<bits/stdc++.h>
    #define c cout
    #define nl endl
    using namespace std;
     int main()
     {
         ios::sync_with_stdio(false);
         cin.tie(0);
         int l=0,m;
         char k[100];
         cin>>k;
         for(int i=0;i<strlen(k);i++){
             if(isupper(k[i]))
                l++;
         }
         m=strlen(k);
         
             m=m/2;
             if(l>m){
                for(int i=0;i<strlen(k);i++){
                    k[i]=toupper(k[i]);
                 } 
             }
             else{
                for(int i=0;i<strlen(k);i++){
                    k[i]=tolower(k[i]);
                 }  
             }
             
         c<<k<<nl;
         
        
         return 0;
     }
     
