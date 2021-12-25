//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
/**--------------------
[
    factorial function
]
-----------------------**/
int factorial(int n)
{
    if(n==0)return 1;
    else{
        return n*factorial(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int temp=factorial(n);
    cout<<temp<<endl;
    return 0;
}