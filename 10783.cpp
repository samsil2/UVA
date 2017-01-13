#include<iostream>
using namespace std;
int main()
{
	int a,b,i=0,t,s=0;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		cin>>a>>b;
		s=0;
		for(i=a;i<=b;i++)
		{
			if(i%2!=0) s+=i;
			
		}
		cout<<"Case "<<j<<": "<<s<<endl;
		
	}
	return 0;
}
