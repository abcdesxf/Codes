#include<bits/stdc++.h>
using namespace std;
int n, a[100010];
int main() {
    cin >> n;
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    a[0] = -111;
    int cnt = 1, ans = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == mx && a[i] == a[i - 1]) {
            cnt++;
        } else {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans = max(ans, cnt);
    cout << ans;
    return 0;
}