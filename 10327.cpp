#include <iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
     int n,a[1000],i,j,swp,ans=0;
     while(cin>>n)
     {
     	for(i=0;i<n;i++)
     	{
     		cin>>a[i];
		 }
		 ans=0;
		 for(i=1;i<=n;i++)
		 {
		 	for(j=n-1;j>=i;j--)
		 	{
		 		if(a[j-1]>a[j])
		 		{
		 			swp=a[j-1];
		 			a[j-1]=a[j];
		 			a[j]=swp;
		 			ans++;
				 }
			 }
		 }
		 cout<<"Minimum exchange operations : "<<ans<<endl;
	 }
     
     
      
	
    return 0;
}
