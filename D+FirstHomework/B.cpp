#include<bits/stdc++.h>
using namespace std;
int n, x, a[22];
int main() {
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int ans = 0, id = 1;
	while (x > 0) {
		int num = x % 2;
		if (num == 1) {
			ans += a[id];
		}
		id++;
		x /= 2;
	}
	cout << ans;
	return 0;
}