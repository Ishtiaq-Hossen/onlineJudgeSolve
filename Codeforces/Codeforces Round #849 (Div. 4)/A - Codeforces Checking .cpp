#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>c;
        if(c=='c'|| c=='o'|| c=='d'||c=='e'|| c=='f'|| c=='r'|| c=='s')
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}