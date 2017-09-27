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
      while(cin>>n && n!=0)
      {
      	while(n>9){
      		n=(n%10)+(n/10);
		  }
		  cout<<n<<endl;
	  }
    return 0;
}
