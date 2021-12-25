#include<iostream>
using namespace std;
int main()
{
    int d1,d2,m1,m2,h1,h2,s1,s2,ds1,ds2,day,hr,mi,sec,N;
    string trash;

     cin>>trash>>d1;
     cin>>h1>>trash>>m1>>trash>>s1;
     cin>>trash>>d2;
     cin>>h2>>trash>>m2>>trash>>s2;
     ds1=s1+(m1*60)+(h1*3600)+(d1*(24*3600));
     ds2=s2+(m2*60)+(h2*3600)+(d2*(24*3600));
     N=ds1-ds2;
     day=N/86400;
     N=N%86400;
     hr=N/3600;
     N=N%3600;
     mi=N/60;
     sec=N%60;
     if(day<0){
        day=-1*day;
     }
     if(mi<0){
        mi=-1*mi;
     }
     if(hr<0){
        hr=-1*hr;
     }
     if(sec<0){
        sec=-1*sec;
     }
     cout<<day<<" dia(s)"<<endl;
     cout<<hr<<" hora(s)"<<endl;
     cout<<mi<<" minuto(s)"<<endl;
     cout<<sec<<" segundo(s)"<<endl;



    return 0;
}
