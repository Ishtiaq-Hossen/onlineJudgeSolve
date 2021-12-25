#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int V,X;
    cin>>V;
    for(int i=0;i<10;i++){
        cout<<"N["<<i<<"] = "<<V<<endl;
        V*=2;
    }

    return 0;
}
