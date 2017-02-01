#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
	int t,n;
	long m;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>m;
		cout<<(n/3)*(m/3)<<endl;
	}
	return 0;
}
