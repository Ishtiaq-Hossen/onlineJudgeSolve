#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int N1;
    double S=0.0,M=0.0;
    double K[12][12];
    char N[2];
    cin>>N1>>N;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>K[i][j];
        }
    }
    if(N[0]=='S'){
        for(int i=0;i<12;i++){
            S+=K[i][N1];
        }
        printf("%.1lf\n",S);
    }
    else if(N[0]='M'){
        for(int i=0;i<12;i++){
            S+=K[i][N1];
        }
        M=S/12.00;
        printf("%.1lf\n",M);
    }
    return 0;

}
