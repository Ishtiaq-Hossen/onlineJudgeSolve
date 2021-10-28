    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
      int n,h;
      cin>>n>>h;
      int i[n];
      for(int k=0;k<n;k++){
        cin>>i[k];
      }
      int sum=0;
      for(int k=0;k<n;k++){
        if(i[k]>h){
          sum=sum+2;
        }
        else{
          sum+=1;
        }
      }
      cout<<sum;
      return 0;
    }
