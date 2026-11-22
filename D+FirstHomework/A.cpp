#include<bits/stdc++.h>
using namespace std;
int n, a[15], sum;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int ANS = 0;
	for (int j = 1; j <= n; j++) {
		sum = a[j];
		int ans = 8585858;
		for (int i = 0; i <= 100; i++) {
			if (i % 2 != 0 && i % 3 != 2) {
				if (i <= sum) {
					ans = min(ans, sum - i);
//					cout << i << " " << sum << "\n";
				}
			}
		}
		ANS += ans;
	}
	cout << ANS;
	return 0;
}
