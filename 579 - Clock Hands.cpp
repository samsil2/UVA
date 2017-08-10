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
   double h,m;
   char dot;
   while(cin>>h>>dot>>m )
   {
   	 
   	if(h==0 && m==0) break;
   	
   	 
   	double ah=h*30.0+(m/60.0)*30.0;
   	double am=m*6.0;
   	
   	double ans=abs(ah-am);
   	if(ans>180) cout<<fixed<<setprecision(3)<<360-ans<<endl;
   	else cout<<fixed<<setprecision(3)<<ans<<endl;
   }
 
}

