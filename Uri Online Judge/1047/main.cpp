#include<iostream>

using namespace std;

 int main()
 {
     int h1,m1,h2,m2,initia,fina,other;
     cin>>h1>>m1>>h2>>m2;
     other=0;
     initia=(h1*60)+m1;
     fina=(h2*60)+m2;
     if(h1<=h2){
        other =fina-initia;
     if(other==0){
        cout<<"O JOGO DUROU 24 HORA(S) E "<<other%60<<" MINUTO(S)"<<endl;
     }
     else{
        cout<<"O JOGO DUROU "<<(other-other%60)/60<<" HORA(S) E "<<other%60<<" MINUTO(S)"<<endl;
     }

     }
     else{
       other = (24*60 - initia) + fina;
       cout<<"O JOGO DUROU "<<(other -(other%60)/60)<<" HORA(S) E "<<other%60<<" MINUTO(S)"<<endl;
     }







     return 0;
 }
