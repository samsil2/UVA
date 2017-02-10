#include<iostream>
#include<iomanip>

using namespace std;

int main(){
     

     int t,n,a[1000],av ;
     double sum=0,res=0;
     cin>>t;
     for(int i=0;i<t;i++)
     {
     	cin>>n;
     	sum=0;
     	
     	for(int j=0;j<n;j++)
     	{
     		cin>>a[j];
     		sum+=a[j];
		 }
		 sum/=n;
		 av=0;
		for(int j=0;j<n;j++)
     	{
     		if(a[j]>sum) av++;
		 }
		 res=(av*100.0)/n;
		 cout<<fixed<<setprecision(3)<<res<<"%"<<endl;
		  
		 
	 }
     
    return 0;
}
