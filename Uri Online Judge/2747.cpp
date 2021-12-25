#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=39;i++){

        cout<<"-";

    }
    cout<<endl;

    for(int i=1;i<=11;i++){


            if(i%2==0){
                for(int j=1;j<=39;j++){

                    if(j==1)
                        cout<<"|";

                    else if(j==39)
                        cout<<"|"<<endl;
                    else
                        cout<<" ";
                }

            }
            else
                continue;


    }
     for(int i=1;i<=39;i++){

        cout<<"-";

    }
    cout<<endl;


    return 0;
}
