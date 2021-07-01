#include <bits/stdc++.h>
using namespace std;

signed main(){
	cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);

	freopen("00. Input.txt", "r", stdin);
	int parity = 0, x;
	while(cin >> x)
		parity ^= x;
	cout << parity << endl;

	return 0;
}
