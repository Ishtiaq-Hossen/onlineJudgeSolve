#include<iostream>
using namespace std;
int main()
{

    int X,Y,k=1;
    cin>>X>>Y;
    for(int i=1;i<=Y;i++)
    {
       if(k<X){
       cout<<i<<" ";
       k++;
       }
       else{
        k=1;
        cout<<i<<" "<<endl;
       }
    }


    return 0;
}

