#include<iostream>
using namespace std;
void banish(int a1[],int length1,int a2[],int length2)
{
    int k;
    for(int i=0;i<length2;i++){
        for(int j=0;j<length1;j++){
            if(a1[j]==a2[i])
            {
                for(k=j;k<length1-1;k++){
                    a1[k]=a1[k+1];
                }
                a1[length1-1]=0;
                j=0;
                i=0;
            }
           
        }
    }
}
int main()
{
    int a1[]={42,3,9,42,42,0,42,9,42,42,17,8,2222,4,9,0,1};
    int a2[]={42,2222,9};
    //int a1[]={2, 4, 6, 8, 2, 4, 8, 6, 2, 2, 8, 4, 6};
    //int a2[]={4, 6, 2, 8};
    int len1=sizeof(a1)/sizeof(a1[0]);
    int len2=sizeof(a2)/sizeof(a2[0]);
    banish(a1,len1,a2,len2);
    for(int i=0;i<len1;i++){
        cout<<a1[i]<<" ";
    }

    return 0;
}