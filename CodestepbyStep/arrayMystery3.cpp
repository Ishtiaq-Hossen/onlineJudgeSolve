//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
void mystery3(int nums[],int length)
{
    for(int i=0;i<length-1;i++)
    {
        if(nums[i]>nums[i+1]){
            nums[i+1]++;
        }
    }
}
int main()
{
    int list[]={12,11,10,10,8,7};
    int len=sizeof(list)/4;
    mystery3(list,len);
    for(auto u:list)cout<<u<<" ";   
    return 0;
}
/**--------------------
[
    Answer
        {42}-->{42}
        {14,7}-->{14,8}
        {7,1,3,2,0,4}-->{7,2,3,3,1,4}
        {10,8,9,5,5}-->{10,9,9,6,6}
        {12,11,10,10,8,7}-->{12,12,11,11,9,8}
]
-----------------------**/