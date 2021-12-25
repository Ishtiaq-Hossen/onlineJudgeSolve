//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
void arrayMysteryExam2(int a[],int length)
{
    for(int i=0;i<length-1;i++)
    {
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            a[0]++;
        }
    }
}
int main()
{
    int a[]={99,88,77,66,55,44};
    int len=sizeof(a)/4;
    arrayMysteryExam2(a,len);
    for(auto u:a)cout<<u<<" ";
    return 0;
}
/**--------------------
[
    Answer
        {5,2,5,2}-->{4,5,2,5}
        {30,10,20,50,40}-->{13,20,30,40,50}
        {99,88,77,66,55,44}->{93,77,66,55,44,99}
]
-----------------------**/