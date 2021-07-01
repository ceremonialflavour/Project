#include <bits/stdc++.h>
using namespace std;

char c = NULL;
void read(int &var){
	var = 0;
	c = getchar();
	
	while(c >= 48 and c < 58){
		var = (var << 3) + (var << 1) + (c - 48);
		c = getchar();
	}
}

signed main(){

	freopen("00. Input.txt", "r", stdin);
	int parity = 0, x;
	while(c != EOF){
		read(x);
		parity ^= x;
	}
	cout << parity << endl;

	return 0;
}
