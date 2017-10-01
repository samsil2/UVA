#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<sstream>
#include<cmath>
#include<map>
#include<set>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define Mo 10000007

using namespace std;

long long mod(long long a, long long b,long long c)
{
	if(b==0) return 1;
	if(b%2==0)
	{
		int x=mod(a,b/2,c);
		return (x*x)%c;
	}
	else return (a%c *mod(a,b-1,c))%c;
}

int main()
{
	ll B,P,M;
	 while(cin>>B>>P>>M && (B,P,M)!=EOF)
        cout<<mod(B,P,M)<<endl;
}
