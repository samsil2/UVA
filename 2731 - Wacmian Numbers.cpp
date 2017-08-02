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
	string s;
	while(cin>>s)
	{
		if(s[0]=='#') return 0;
		
		int length=s.size();
		int ans=0,i,power;
		for( i=length-1,power=1;i>=0;--i,power*=6)
		{
			
			if(s[i]==')') ans += 1*power;
            else if(s[i]=='~') ans += 2*power;
            else if(s[i]=='@') ans += 3*power;
            else if(s[i]=='?') ans += 4*power;
            else if(s[i]=='\\') ans += 5*power;
            else if(s[i]=='$') ans -= power;
             
		}
		
		cout<<ans<<endl;
	}
}

