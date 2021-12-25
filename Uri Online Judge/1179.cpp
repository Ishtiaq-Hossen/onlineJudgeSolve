#include<iostream>
using namespace std;
int main()
{
    int T[15],par[5],impar[5];
    int k=0,l=0,m=0,n=0;

    for(int i=0;i<15;i++)
        cin>>T[i];
    for(int t=0;t<15;t++){
        if(l==5){
            for(int i=0;i<5;i++){
                cout<<"par["<<i<<"] = "<<par[i]<<endl;
            }
            l=0;
        }
        if(n==5){
            for(int i=0;i<5;i++){
                cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
            }
            n=0;
        }

        if(T[t]%2==0){
            par[k]=T[t];
            k++;
            l++;
            if(k==5)
                k=0;
        }
        else{
            impar[m]=T[t];
            m++;
            n++;
            if(m==5)
                m=0;
        }

    }
    for(int i=0;i<n;i++){
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
    }
    for(int i=0;i<l;i++){
        cout<<"par["<<i<<"] = "<<par[i]<<endl;
    }




    return 0;
}
