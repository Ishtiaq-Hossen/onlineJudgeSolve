//--------Bismillahir Rahmanir Rahim----------/
#include<bits/stdc++.h>
#define c cout
#define nl endl
#define s scanf
#define p printf
#define pb push_back
#define REP(i,a,b) for(int i=a;i<b;i++) //for loop
#define _ ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pi 3.141592653589793
#define showus(a) cout<<fixed<<setprecision(a)

//------data types----/
typedef long long int ll;
typedef unsigned long long int llu;

using namespace std;
/**--using in=int;
using ll=long long;--**/

int main()
{_
    
    int n,count=0;
    s("%d",&n);
    
    const int n1=n;
    char ch[n1];
    bool arr[n1];
    for(int i=0;i<26;i++) {arr[i]=1;}
    for(int i=0;i<n;i++)
    {
        s(" %c",&ch[i]);
        if(ch[i]>='A' && ch[i]<='Z')
            ch[i]=ch[i]-'A'+'a';
        
        if(ch[i]=='a')
            arr[0]=0;
        else if(ch[i]=='b')
            arr[1]=0;
        else if(ch[i]=='c')
            arr[2]=0;
        else if(ch[i]=='d')
            arr[3]=0;
        else if(ch[i]=='e')
            arr[4]=0;
        else if(ch[i]=='f')
            arr[5]=0;
        else if(ch[i]=='g')
            arr[6]=0;
        else if(ch[i]=='h')
            arr[7]=0;
        else if(ch[i]=='i')
            arr[8]=0;
        else if(ch[i]=='j')
            arr[9]=0;
        else if(ch[i]=='k')
            arr[10]=0;
        else if(ch[i]=='l')
            arr[11]=0;
        else if(ch[i]=='m')
            arr[12]=0;
        else if(ch[i]=='n')
            arr[13]=0;
        else if(ch[i]=='o')
            arr[14]=0;
        else if(ch[i]=='p')
            arr[15]=0;
        else if(ch[i]=='q')
            arr[16]=0;
        else if(ch[i]=='r')
            arr[17]=0;
        else if(ch[i]=='s')
            arr[18]=0;
        else if(ch[i]=='t')
            arr[19]=0;
        else if(ch[i]=='u')
            arr[20]=0;
        else if(ch[i]=='v')
            arr[21]=0;
        else if(ch[i]=='w')
            arr[22]=0;
        else if(ch[i]=='x')
            arr[23]=0;
        else if(ch[i]=='y')
            arr[24]=0;
        else if(ch[i]=='z')
            arr[25]=0;
         
        

    }
    
    for(int i=0;i<26;i++)
    {
        if(arr[i]==true) count=1;
        
    }
    if(count==0)p("YES\n");
    else p("NO\n");

    
    return 0;
}
