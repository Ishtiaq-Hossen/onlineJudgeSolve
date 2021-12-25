#include<iostream>

using namespace std;

 int main()
 {
    int input, a, b, ap;
    double N;
    cin>>N;
    input=N;
    cout<<"NOTAS: "<<endl;
    cout<<input/100<<" nota(s) de R$ 100.00"<<endl;
    a = input % 100;
    cout<<a/50<<" nota(s) de R$ 50.00"<<endl;
    a = a % 50;
    cout<<a/20<<" nota(s) de R$ 20.00"<<endl;
    a = a % 20;
    cout<<a/10<<" nota(s) de R$ 10.00"<<endl;
    a=a%10;
    cout<<a/5<<" nota(s) de R$ 5.00"<<endl;
    a=a%5;
    cout<<a/2<<" nota(s) de R$ 2.00"<<endl;
    a=a%2;

    cout<<"MOEDAS:"<<endl;
    cout<<a/1<<" moeda(s) de R$ 1.00"<<endl;
    ap= (N * 100) - (input * 100);
    cout<<ap/50<<" moeda(s) de R$ 0.50"<<endl;
    b=ap%50;
    cout<<b/25<<" moeda(s) de R$ 0.25"<<endl;
    b=b%25;
    cout<<b/10<<" moeda(s) de R$ 0.10"<<endl;
    b=b%10;
    cout<<b/5<<" moeda(s) de R$ 0.05"<<endl;
    b=b%5;
    cout<<b/1<<" moeda(s) de R$ 0.01"<<endl;










    return 0;
 }
