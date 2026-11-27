#include<bits/stdc++.h>
using namespace std;
int n, k, a[200010];
map<int, int> mx, id;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (mx[a[i] / k] < a[i]) {
            mx[a[i] / k] = a[i];
            id[a[i] / k] = i;
        }
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        if (id[a[i] / k] != i) {
            ans += a[i];
        }
    }
    cout << ans;
    return 0;
}