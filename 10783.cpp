 #include<iostream>
using namespace std;
int main()
{
	int t,a,b,i,sum=0;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		cin>>a>>b;
		sum=0;
			for(i=a;i<=b;i++)
	{ 
		if(i%2!=0)
		{
			sum+=i;
		}
		
	} cout<<"Case "<<j<<": "<<sum<<endl;
	}


}
 
  
