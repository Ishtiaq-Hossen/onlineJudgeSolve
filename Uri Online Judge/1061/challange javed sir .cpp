#include<iostream>
using namespace std;
int main()
{
   int sum1=0,sum=0,arr[5][5];
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>arr[i][j];
    }
   }
   cout<<"\n\n-----------------#------------------\n\n";
    for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(i==j)
        sum+=arr[i][j];
        if((i+j)==4)
        sum1+=arr[i][j];
    }
   }
   cout<<"\n\n-----------------#------------------\n\n";

   cout<<"Sum of left diagonal = "<<sum<<endl;
   cout<<"Sum of right diagonal = "<<sum1<<endl;





    return 0;
}
