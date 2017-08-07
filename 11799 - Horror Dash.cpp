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
 int t,n,i,ans=0,a;
 cin>>t;
 for(i=0;i<t;i++)
 {
 	ans=0;
 	cin>>n;
 	for(int j=0;j<n;j++)
 	{
 		cin>>a;
 		ans=max(ans,a);
	 }
	 cout<<"Case "<<i+1<<": "<<ans<<endl;
 }
}

