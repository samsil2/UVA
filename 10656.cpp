#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a,n,s,i;
    while(cin>>n && n!=0)
    {
        vector<int>v;
        
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a>0) v.push_back(a);
        }
        int len=v.size();
        if(!len) cout<<"0";
        else
        {
            for(int i=0;i<len;i++)
            {
                  if(i) cout<<" ";
				  cout<<v[i];
				 
              
            }

        }
        cout<<endl;
    }
return 0;
}
