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
 
int main(){
	
	 ios_base::sync_with_stdio(0);
	   int n,ans=0,m[127][127],temp,sum[127][127] ,i,j,k,l;
	   
	   while(cin>>n && n!=EOF)
	   {
	   	for(i=0;i<n;i++)
	   	 for(j=0;j<n;j++)
	   	 {
	   	 	cin>>m[i][j];
	   	  sum[i][j]=m[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
			}
			 ans=1<<31;
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					for(k=i;k<n;k++)
					{
						for(l=j;l<n;l++)
						{
						ans=max(ans, sum[k][l]-sum[i-1][l]-sum[k][j-1]+sum[i-1][j-1]);
							  
						}
					}
				}
			}
			cout<<ans<<endl; //O(n^4) complexity 
	   }
	   
	 
    return 0;
    
   
	 
     
}
