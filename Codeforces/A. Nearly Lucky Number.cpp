#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int count=0;
    while(n){
        int temp=n%10;
        n=n/10;
        if(temp==4 || temp==7){
            count++;
        }
    }
    if(count==4 || count ==7) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
