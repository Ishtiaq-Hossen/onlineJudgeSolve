#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(auto u:s)cout<<u<<": F"<<endl;
    return 0;
    
}
