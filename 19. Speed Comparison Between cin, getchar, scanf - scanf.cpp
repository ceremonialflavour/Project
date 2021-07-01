#include <bits/stdc++.h>
using namespace std;

signed main(){

	freopen("00. Input.txt", "r", stdin);
	int parity = 0, x;
	while(scanf("%d", &x) == 1)
		parity ^= x;
	cout << parity << endl;

	return 0;
}
