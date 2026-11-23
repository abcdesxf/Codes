#include<bits/stdc++.h>
using namespace std;
int n, a[1000010];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    long long ans = 0;
    for (int i = 1; i <= n / 2; i++) {
        ans += 1ll * (a[i] + a[n - i + 1]) * ((a[i] + a[n - i + 1]));
    }
    cout << ans;
    return 0;
}