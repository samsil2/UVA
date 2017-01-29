#include <iostream>
#include<cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;
   int main()
{
     int t;
	long long n;

	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
	 cout<<abs((((n * 63 + 7492) * 5 - 498)/10)%10)<<endl;
	}
	return 0;
}
