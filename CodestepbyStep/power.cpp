#include<iostream>
using namespace std;
/**--------------------
[
    power function with recursion
]
-----------------------**/
int power(int a,int b){

    if(b==0)return 1;
    else return a*power(a,b-1);
    
    return 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
}