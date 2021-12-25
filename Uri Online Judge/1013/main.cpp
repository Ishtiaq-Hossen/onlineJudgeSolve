    #include <iostream>
    #include <cmath>
    #include<iomanip>
    using namespace std;
    int main()
    {
    	double result,x1,x2,y1,y2;
    	cin>>x1>>y1;

    	cin>>x2>>y2;
    	result =(pow(x2-x1,2)+pow(y2-y1,2));
    	result=sqrt(result);

    	cout<<showpoint<<fixed<<setprecision(4)<<result;
    	cout<<endl;
    	return 0;
    }
