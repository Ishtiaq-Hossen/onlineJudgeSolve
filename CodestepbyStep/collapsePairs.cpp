#include<iostream>
using namespace std;
void collapsePairs(int a[],int length)
{
    if(length%2==1){
        length--;
    }
    for(int i=0;i<length;i=i+2){
        
        int sum=a[i]+a[i+1];
        if(sum%2==0){
            a[i]=sum;
            a[i+1]=0;

        }
        else{
            a[i]=0;
            a[i+1]=sum;
        }
    }
}
int main()
{
    int a[]={7,2,8,9,4,22,7,1,9,10};
    //int a[]={1,3,3};
    int len=sizeof(a)/4;
    cout<<len<<"\n";
    collapsePairs(a,len);
    for(int u:a)cout<<u<<" ";
    return 0;
}
