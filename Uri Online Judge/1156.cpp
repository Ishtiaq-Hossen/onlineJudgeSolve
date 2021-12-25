#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float S=0,k=1;
    for(int i=1;i<=39;i+=2){
        S+=(i/k);
        k*=2;
    }
    printf("%.2f\n",S);

    return 0;
}
