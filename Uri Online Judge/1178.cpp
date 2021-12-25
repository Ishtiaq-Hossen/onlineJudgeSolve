#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int N[99];
    double X;
    cin>>X;
    for(int i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,X);
        X=X/2;
    }

    return 0;
}
