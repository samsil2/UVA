#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define Pi 2*acos(0.0)

using namespace std;
 

int main()
{
	
	 ios_base::sync_with_stdio(0);
	 cin.tie(NULL);
     int n;
      cout<<"PERFECTION OUTPUT\n";
    while(cin>>n&& n!=0){
    	 
     	int sum=0;
    
     		 for(int i=1;i<n;i++)
     	 {
     	  if(n%i==0) sum+=i;
        }
			  
		  cout<<setw(5)<<n;
		   if(sum==n) cout<<"  PERFECT"<<endl;
           else if(sum<n) cout<<"  DEFICIENT"<<endl;
           else cout<<"  ABUNDANT"<<endl;
		  
		 
	}
		  cout<<"END OF OUTPUT\n";
	 
    return 0;
}

