#include<iostream>
using namespace std;
int main()
{
   float x;
   float y;
   cin>>x;
   cin>>y;
   if(x == 0 && y == 0)
     {
        cout<<"Origem"<<endl;
     }
   else if(x == 0)
     {
        cout<<"Eixo"<<endl;
     }
   else if(y == 0)
     {
        cout<<"Eixo"<<endl;
     }
   else if(x > 0 && y > 0)
     {
        cout<<"Q1"<<endl;
     }
   else if(x > 0 && y < 0)
     {
        cout<<"Q4"<<endl;
     }
   else if(x < 0 && y > 0)
     {
        cout<<"Q2"<<endl;
     }
   else
     {
         cout<<"Q3 "<<endl;
     }
 return 0;
}
