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


using namespace std;

  
 
int main(){
	
	 ios_base::sync_with_stdio(0);
	 cin.tie(NULL);
	 
	int A, B, C;
    
    while (cin >> A >> B >> C)
    {
        if (A == B && B == C)
            cout << "*\n";
        else if (A == B)
            cout << "C\n";
        else if (A == C)
            cout << "B\n";
        else
            cout << "A\n";
    }
	
    return 0;
    
   
	 
     
}
