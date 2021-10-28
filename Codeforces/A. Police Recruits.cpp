#include<bits/stdc++.h>
#define c cout
#define nl endl
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ios
    int n,l=0,k=0,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==-1){
            if(k>0){
                k-=1;                
            }
            else
                l++;
        }
        else{
            k+=arr[i];
        }       
    }
    c<<l<<nl;
    return 0;
}
