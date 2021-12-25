//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
//-----[evendigit returning with recursive function]-----/
int evenDigits(int n)
{
    if(n!=0){
        int temp=n%10;
        n=n/10;
        evenDigits(n);
        if(temp%2==0){
            return temp+evenDigits(n)*10;
        }
        else{
            return evenDigits(n);
        }
        
    }
    else return 0;
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    cout<<evenDigits(n);
    return 0;
}
