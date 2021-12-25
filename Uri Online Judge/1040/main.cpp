#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    float N1,N2,N3,N4,last,media;
    cin>>N1>>N2>>N3>>N4;
    media=(N1 * 2 + N2 * 3 + N3 * 4 + N4) / 10;

    if(media>=7){
        cout<<"Media: "<<showpoint<<fixed<<setprecision(1)<<media<<endl;
        cout<<"Aluno aprovado."<<endl;
    }
    else if(media>=5){
        cin>>last;
        cout<<"Media: "<<showpoint<<fixed<<setprecision(1)<<media<<endl;
        cout<<"Aluno em exame."<<endl;
        cout<<"Nota do exame: "<<showpoint<<fixed<<setprecision(1)<<last<<endl;
        if(((last + media) / 2.0 )> 5.0){
            cout<<"Aluno aprovado."<<endl;

        }
            else{
            cout<<("Aluno reprovado.")<<endl;
        }
        cout<<"Media final: "<< showpoint<<fixed<<setprecision(1)<<((last + media ) / 2.0)<<endl;

    }
    else{
        cout<<"Media: "<<showpoint<<fixed<<setprecision(1)<<media<<endl;
        cout<<("Aluno reprovado.")<<endl;
    }

    return 0;
}
