#include<iostream>
using namespace std;
 
int main()
{
	int arr[21] = {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441, 1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224, 47045881, 64000000, 85766121};
	int n,i;

	while(cin>>n && n!=0)
	{
			bool f=0;
		for(i=0;i<21;i++)
		{
			if(n==arr[i]) {
			  f=1;
			  break;
			}
			
		}
		 if(f) cout<<"Special\n";
		 else cout<<"Ordinary"<<endl;
		
	}
}
