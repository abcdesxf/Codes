#include<bits/stdc++.h>
using namespace std;
int n, k[110], a[110][110], cnt[110][110], cnt2[110][110];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> k[i];
        for (int j = 1; j <= k[i]; j++) {
            cin >> a[i][j];
            cnt[i][a[i][j]]++;
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int l = 1; l <= k[j]; l++) {
                cnt2[j][a[j][l]] = cnt[j][a[j][l]];
            }
        }
        for (int l = 1; l <= n; l++) {
            for (int j = 1; j <= k[i]; j++) {
                cnt2[l][a[i][j]]--;
                // cout << l << " " << a[i][j] << "\n";
                if (cnt2[l][a[i][j]] < 0) cnt2[l][a[i][j]] = 0;
            }
        }
        // for (int j = 1; j <= n; j++) {
        // for (int l = 1; l <= 4; l++) {
        //     cout << cnt2[j][l] << " ";
        // }
        // cout << "\n";
        // }
        // cout << "\n";
        int num = 0;
        for (int j = 1; j <= n; j++) {
            int f = 0;
            for (int l = 1; l <= k[i]; l++) {
                if (cnt2[j][a[j][l]] != 0) {
                    f = 1;
                }
            }
            if (f == 0) {
                num++;
            }
        }
        ans = max(ans, num);
    }
    cout << ans;
    return 0;
}