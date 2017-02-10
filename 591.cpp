#include <iostream>
#include <cstring>
#include<algorithm>
#include <cstdio>

using namespace std;
int main() {
	int n, sum, avg, a[55], res, j = 1;

	while (true) {
		cin>>n;
		if(n==0) break;
		sum = 0;
		for (int i = 0; i < n; i++) {
			cin>>a[i];
			sum += a[i];
		}
		avg = sum / n;
		res = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > avg)
				res += a[i] - avg;
		}
		 
		cout<<"Set #"<<j++<<endl;
		cout<<"The minimum number of moves is "<<res<<".\n\n";
	}

	return 0;
}
