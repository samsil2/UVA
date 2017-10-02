#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<sstream>
#include<cmath>
#include<map>
#include<set>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define Mo 10000007

using namespace std;
 

int main(){
	
	 ios_base::sync_with_stdio(0);
	 int t=1;
	 int n,m,min;
	 while(cin>>n>>m)
	 {
	 	if(n==0  ||  m==0) break;
	   if (t > 1)
          cout<<endl;

        //use boarder
        vector<vector<char> > f(n + 5, vector<char>(m + 5, '.'));
        for (int i = 1;  i<= n; ++i)
            for (int j = 1; j <= m; ++j)
                cin>>f[i][j];

        cout << "Field #" << t++ << ":" << endl;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if (f[i][j] == '*')  //mine print
                      cout<<'*';
                else
                {
                      min  = 0;
                    for (int a = i - 1; a <= i + 1; ++a)
                        for (int b = j - 1; b <= j + 1; ++b) //safezone
                            if (f  [a][b] == '*')
                                ++min;
                    cout<<min;
                }
            }
             cout<<endl;
        }
    }
    return 0;
    
   
	 
     
}
