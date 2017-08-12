#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<map>
#include<set>

using namespace std; 


int main()
{
	int i,j;
	while(cin>>i>>j && (i,j) !=EOF)
	{
		cout<<i<<" "<<j<<" ";
		if(i>j) swap(i,j);
		
		int mc=0;
		for(int a=i;a<=j;a++)
		{
			int l=1;
		  int k=a;
		 
			while(k!=1)
			{
				l++;
				 
				
				 if(k%2!=0)
            k=(3*k)+1;
        else
            k=k/2;
			}
			
			if(mc<=l) mc=l;
		}
		
		cout<<mc<<endl;
	}
}
