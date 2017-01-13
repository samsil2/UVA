#include <iostream>
using namespace std;

int main() {
	int TC, a, n, p, f;

	cin>>TC;

	while (TC--) {
		int ans = 0;
		cin>>f;
		for (int i = 0; i < f; i++) {
			cin>>a>>n>>p;
			ans += a * p;
		}
		cout<<ans<<endl;
	}

	return 0;
}
