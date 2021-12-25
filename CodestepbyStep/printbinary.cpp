#include<iostream>
using namespace std;
/**--------------------
[
    binary print with recurcive function 
]
-----------------------**/
void printBinary(int n)
{
    
    if(n==0){
        cout<<0;
        return ;
    }
    if(n==1)
    {
        cout<<n;
        return;
    }
    if(n<0)
    {
        n=n*-1;
        cout<<"-";
    }
    if(n>0){        
        printBinary(n/2);  
        cout<<n%2;    
    }
    
    
}
int main(){
    int n;
    cin>>n;
    printBinary(n);
    
    return 0;
}
