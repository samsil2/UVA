#include <iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
 #include<algorithm>
    using namespace std;
    int main()
    {
         char a[26][26];
		int n,t=0,i;
         while(cin>>n && n)
         {
         	
         	for(i=0;i<n;i++)
         	{
         		 cin>>a[i];
         		 
         
			 }
			 cout<<"SET "<<++t<<endl;
			 for(i=0;i<n;i+=2)
			 {
			 	cout<<a[i]<<endl;
			 			
         		 }
         		 	if(n%2==0) 
		{
			
				for(i=n-1;i>0;i-=2) cout<<a[i]<<endl;;
		}
		else 
		{
			
				for(i=n-2;i>0;i-=2) cout<<a[i]<<endl;
		}
		
		 }
        return 0;
    }
