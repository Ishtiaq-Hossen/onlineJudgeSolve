#include <iostream>
using namespace std;

int main() {
    
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n-1;i++){
	   cin>>arr[i]; 
	}
	int a,b;
	cin>>a>>b;
	int sum=0;
	a--;
	b--;
	for(int i=a;i<b;i++){
	    sum=sum+arr[i];
	}
	cout<<sum;
	return 0;
}
