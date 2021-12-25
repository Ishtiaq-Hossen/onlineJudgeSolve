#include<iostream>
using namespace std;
int main()
{
    string h;
    h="Ho";
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        if(i<N){
            cout<<h<<" ";
        }
        else
            cout<<h<<"!"<<endl;
    }
    return 0;
}
