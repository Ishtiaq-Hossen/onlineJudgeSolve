//--------Bismillahir Rahmanir Rahim----------/
#include<bits/stdc++.h>
using namespace std;
int findMedian(int a[],int length)
{
    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }       
    }  
    
    return a[length/2];
}
int main()
{
    //int a[]={42,37,1,97,1,2,7,42,3,25,89,15,10,29,27};
    int a[]={5,2,4,17,55,4,3,26,18,2,17};
    int len=sizeof(a)/4;
    cout<<findMedian(a,len);
    
    return 0;
}