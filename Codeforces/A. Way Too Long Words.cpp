    #include<bits/stdc++.h>
    #define e endl
    #define optimize(){ ios_base::sync_with_stdio(0);cin.tie(0);}
    using namespace std;
     
    int main()
    {
        optimize();
        string name;
        int len,n;
        cin>>n;
        while(n!=0){
        cin>>name;
        len=name.size();
        if(len>10){
            cout<<name[0]<<len-2<<name[len-1]<<endl;
        }
        else
        {
            cout<<name<<endl;
        }
        n--;
        }
        return 0;
    }
