#include <iostream>
#include <cstring>
#include<algorithm>
#include <cstdio>

using namespace std;

 const int N = 10010;

int n;
int a[N];

bool input();
void solve();

int main()
{
 
	
	while (input()) {
		solve();
	}
	return 0;
}

bool input()
{
   cin>>n;
	if (n == 0) return false;
	
	for (int i = 1; i <= n; i++) {
		cin>>a[i];
	}
	
	a[0] = a[n], a[n + 1] = a[1];
	return true;
}

void solve()
{
	int c = 0;
	
	for (int i = 1; i <= n; i++) {
		if (a[i] < a[i - 1] && a[i] < a[i + 1]) c++;
		else if (a[i] > a[i - 1] && a[i] > a[i + 1]) c++;
	}
	
          cout<<c<<endl;
}
