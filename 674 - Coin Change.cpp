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
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
 


using namespace std;
int main() {
	int DP[7500] = {}, M[5] = {1, 5, 10, 25, 50};
	int i, j, n;
	DP[0] = 1;
	for(i = 0; i < 5; i++) {
		for(j = M[i]; j < 7500; j++)
			DP[j] += DP[j-M[i]];
	}
	while(sc ("%d", &n) == 1)
		pf("%d\n", DP[n]);
    return 0;
}
