#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int k,n;
    for(int i=0;i<=3;i++){
        k=rand()%10;
        cin>>n;
        if(k==n){
            cout<<"     ^-----^     \n";
            cout<<"     | . . |      you won!!\n";
            cout<<"     |  .  |       / /\n";
            cout<<"     |_____|      / /\n";
            cout<<"-----       -----/ /\n";
            cout<<"-----       ------\n";
            cout<<"     |     |      \n";
            cout<<"     |     |      \n";
            cout<<"     |     |      \n";
            cout<<"     -------      \n";
        }
        else{
            cout<<"        You Lose!!      \nbut don't lost hope dear\n";
            cout<<"        ^_____^      \n";
            cout<<"        | . . |      \n";
            cout<<"   / /  |  _  |    \\ \\\n";
            cout<<"  / /   |_____|     \\ \\\n";
            cout<<" / /----       ------\\ \\\n";
            cout<<"/-------       ---------\\\n";
            cout<<"        |     |      \n";
            cout<<"        |     |      \n";
            cout<<"        |     |      \n";
            cout<<"        -------      \n";
        }

    }

    return 0;


}
