#include<iostream>
using namespace std;
int main()
{
    int in=0, gr=0, impa=0,gen=0;
    int x,y,op;
    for(int i=0;op!=2;i++){
        cin>>x>>y;
        if(x>y)
            in++;
        else if(x<y)
            gr++;
        else if(x==y)
            impa++;
        gen++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>op;
    }
    cout<<gen<<" grenais"<<endl;
    cout<<"Inter:"<<in<<endl;
    cout<<"Gremio:"<<gr<<endl;
    cout<<"Empates:"<<impa<<endl;
    if(in > gr)
        cout << "Inter venceu mais"<<endl;
    else if(in < gr)
        cout << "Gremio venceu mais"<<endl;
    else
        cout << "Nao houve vencedor"<<endl;


    return 0;
}
