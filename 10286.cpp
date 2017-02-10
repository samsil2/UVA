#include <iostream>
#include <cmath>
#include<algorithm>
#include <cstdio>
#include <iomanip>
#define pi acos(-1)
#define Sin(x) sin(x*pi/180.0) //formula

using namespace std;
int main() {
       double a,res;
       while(cin>>a)
       {
       	res=Sin(108)/Sin(63)*a;//formula
       	cout<<fixed<<setprecision(10)<<res<<endl;
	   }
 
	return 0;
}
