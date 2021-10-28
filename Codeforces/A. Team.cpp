    
//https://codeforces.com/contest/231/problem/A
    #include<bits/stdc++.h>
     
    using namespace std;
     
    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define e endl
    #define k int
    #define re return 0
    int main()
    {
        optimize();
        k n,arr[4],sum=0,count=0;
        cin>>n;
        while(n!=0){
            for(k i=0;i<3;i++)
                cin>>arr[i];
            sum=0;
            for(k i=0;i<3;i++){
                if(arr[i]==1)sum++;
            }
            if(sum>=2)count++;
     
            n--;
        }
        cout<<count<<e;
        re;
     
    }
