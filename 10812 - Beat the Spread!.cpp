#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<map>
#include<set>

using namespace std; 

int main()
{
 int t,s,d;
 cin>>t;
 while(t--)
 {
 	cin>>s>>d;
 	if(s<d || s%2!=d%2) cout<<"impossible"<<endl;
 	else{
 		int ans1=(s+d)/2;
 		int ans2=abs(s-d)/2;
 		if(ans1>ans2) cout<<ans1<<" "<<ans2<<endl;
 		else cout<<ans2<<" "<<ans1<<endl;
 		 
	 }
 }
	
}
