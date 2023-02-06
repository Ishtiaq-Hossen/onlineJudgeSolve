    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        string s;
        int n,temp,mx,temp2;
        cin>>n;
        while(n--)
        {
            cin>>temp;
            cin>>s;
            mx=0;
            for(int i=0;i<temp;i++)
            {
                temp2=s[i];
                //cout<<temp2<<s[i]<<endl;
                if(temp2>mx)mx=temp2;
            }
            temp2=abs(97-mx);
            temp2++;
     
            cout<<temp2<<endl;
        }
        return 0;
    }