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
//samsil arefin
int main(){

     int n;
     vector<int> v;
    
    while(cin>>n)
    {
    	  
      
      v.push_back(n);
	 sort(v.begin(),v.end());
	  if(v.size()%2==1) cout<<v[(v.size()+1)/2-1]<<endl;
	  else cout<<(v[(v.size()+1)/2-1]+v[ (v.size()+1)/2])/2<<endl;
	}
    return 0;
}
