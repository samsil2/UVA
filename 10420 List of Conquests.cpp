#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<map>

using namespace std; 

int main()
{
	int n;
	string  c,name;
	cin>>n;
	std:: map<string, int> k;
	while(n--)
	{
		cin>>c;
		getline(cin,name);
		k[c] +=1;
	}
	
	 
	
	for(std::map<string,int >::iterator it=k.begin();it!=k.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	
}
