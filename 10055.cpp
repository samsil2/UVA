#include <iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
     long a,b;
     while(cin>>a>>b)
     {
     	cout << max(a, b) - min(a, b) << endl;
	 }
      
	
    return 0;
}
