#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
	long long n,b,h,w,i;
	while(cin>>n>>b>>h>>w && (n,b,h,w)!=EOF)
	{
		int p,we;
		long long cost=1e9;
		for(i=0;i<h;i++)
		{
			cin>>p;
			for(int j=0;j<w;++j)
			{
				cin>>we;
				if(we>=n){
					 cost=min(cost,n*p);
				}
			}
		}
		if(cost>b) cout<<"stay home\n";
		else cout<<cost<<endl;
	}
}
