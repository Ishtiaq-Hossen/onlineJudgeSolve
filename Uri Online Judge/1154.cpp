#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x,sum=0;
    float avg=0,k=0;
    while(1){
        cin>>x;
        if(x<0)
            break;
        else{
            sum+=x;
            k++;
        }
    }
    avg=sum/k;
    printf("%.2f\n",avg);

    return 0;
}
