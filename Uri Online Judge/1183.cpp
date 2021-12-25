#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double M[12][12],sum=0.0;
    char N[2];
    int p=12;
    cin>>N;
    for(int  i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>M[i][j];
        }
    }
    for(int  i=0;i<=11;i++){
        for(int j=p;j<12;j++){
            sum+=M[i][j];
            }
        p--;
    }
    if(N[0]=='S')
        printf("%.1lf\n",sum);

    else if(N[0]=='M'){
        sum=sum/66.00;
        printf("%.1lf\n",sum);
    }
    return 0;

}
