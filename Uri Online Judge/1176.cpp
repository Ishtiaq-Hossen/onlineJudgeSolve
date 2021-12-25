#include<iostream>
using namespace std;
int main()
{
    long long n,first,second,next,c;
    int j;
    cin>>j;
    for(int i=0;i<j;i++){
        first=0;
        second=1;
        cin>>n;
        n=n+1;
        for(c=0;c<n;c++){
            if(c<=1)
                next=c;
            else{
                next=first+second;
                first=second;
                second=next;

            }
        }
        cout<<"Fib("<<n-1<<") = "<<next<<endl;
    }


    return 0;
}
