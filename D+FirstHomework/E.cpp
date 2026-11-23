#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, h, da, db, xa, xb, x;
signed main() {
    cin >> n >> h >> da >> db >> xa >> xb >> x;
    int ans = 1e18;
    for (int i = 0; i <= n; i++) {
        int cost = x * i;
        int eat = n - i;
        int now = eat * xb + h;
        if (now > cost) {
            ans = min(ans, eat * xa);
        } else {
            int cha = cost - now;
            if (cha == 0) {
                ans = min(ans, (eat - 1) * xa + da);
            } else {
                int cnt = max(0ll, (i*x-h-eat*xb)/(db-xb)+1);
                if (cnt > eat) continue;
                ans = min(ans, cnt * da + (eat - cnt) * xa);
            }
        }
    }
    cout << ans;
    return 0;
}