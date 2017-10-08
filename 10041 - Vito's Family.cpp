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
	 int t, n, med, h[505], ans;

	sc("%d", &t);
	while (t--) {
		sc("%d", &n);

		for (int i = 0; i < n; i++) {
			sc("%d", &h[i]);
		}
		sort(h, h + n);
		med = h[n / 2];

		ans = 0;
		for (int i = 0; i < n; i++) {
			ans += abs(med - h[i]);
		}

		pf("%d\n", ans);
	}
	   
	 
    return 0;
    
   
	 
     
}
