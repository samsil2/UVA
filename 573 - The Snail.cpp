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
 int  h,u,d,f;
 while(cin>>h>>u>>d>>f)
 {
 	if(h==0)break;
 	
 	int day=0;
 	double s=u;
 	double w=h;
 	double sh=d;
 	double fat=(f/100.00)*s;
 	double ch=0;
 	while(1)
 	{
 		day++;
 		ch+=s;
 		if(ch>w)
 		{
 			cout << "success on day " << day << endl;
                break;
		 }
		 ch-=sh;
		 if(ch<0)
		 {
		 	cout<<"failure on day "<<day<<endl;
		 	break;
		 }
		 s-=fat;
		 if(s<0) s=0;
	 }
 }
 return 0;
 
}

