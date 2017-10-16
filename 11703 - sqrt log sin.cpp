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


using namespace std;

long long a[1000001]={1};
 
int main(){
	
	 ios_base::sync_with_stdio(0);
	 cin.tie(NULL);
     int i;
     	long  x,y,z;
     	 
     	for(i=1;i<=1000000;i++)
     	{
     		x=(int) (i-sqrt(i))  ;
     		y=(int) log(i)  ;
     		z=(int) (i*sin(i) *sin(i)) ;
     		a[i]=(a[x]%1000000 + a[y]%1000000 +a[z]%1000000)%1000000;
     		
		 }
     while(cin>> i && i!=-1)
     {  
     
		 cout<<a[i]<<endl;
	 }
	 
    return 0;
    
   
	 
     
}
