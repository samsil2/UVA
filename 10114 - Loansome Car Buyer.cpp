#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std; 
int Dur, n,m;
	double p,downPayment, loan, a[101];
void solve()
{
	

	while (true) {
		cin >> Dur ;
		if (Dur < 0)
			break;
			
			cin>> downPayment >> loan >> n;

	 
		while (n--) {
			cin >> m >> p;
			for (int i = m; i < 101; i++)
				a[i] = p;
		}

		int cur = 0;
		double mp = loan / Dur;
		double cv = (loan + downPayment) * (1 - a[0]);
		double cl = loan;
		while (cv < cl) {
			cur++;
			cl -= mp;
			cv*= (1-a[cur]);
		}

		cout << cur << " month";
		if (cur == 1)
			cout << "s";
		cout << endl;
	}
}

 int main() {
	
	solve();

	return 0;
}
