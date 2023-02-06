    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,n2;
        cin>>n;
        while(n--)
        {
            cin>>n2;
     
            int arr[n2],arr2[n2];
            for(int i=0;i<n2;i++)
            {
                cin>>arr[i];
                arr2[i]=arr[i];
            }
            
            sort(arr2,arr2+n2);
            
            for(int i=0;i<n2;i++)
            {
                if(arr[i]==arr2[n2-1])
                {
                    cout<<arr2[n2-1]-arr2[n2-2]<<" ";
                    continue;
                }
                else{
                    cout<<arr[i]-arr2[n2-1]<<" ";
                }
            }
            cout<<endl;
        }
        return 0;
    }