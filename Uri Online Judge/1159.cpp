#include<iostream>
using namespace std;
int main()
{
    int x,sum,k;
    while(1){

        cin>>x;
        k=1;
        sum=0;
        if(x==0)
            break;
        else{
            for(int j=x;k<=5;j++){
                if(j%2==0){
                    sum+=j;
                    k++;
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
