#include<bits/stdc++.h>
using namespace std;
int n, cnt[3], cnt2[3], cnt3[3];
string s;
int main() {
    cin >> n >> s;
    s = " " + s;
    int j = 0, k = 0;
    for (int i = n; i >= 1; i--) {
        cnt3[s[i] - 'A']++;
        if (cnt3[0] > 0 && cnt3[1] > 0 && cnt3[2] > 0) {
            k = i;
            break;
        }
    }
    long long ans = 0;
    int f = 0;
    for (int i = 1; i <= n; i++) {
        cnt2[s[i] - 'A']++;
        if (cnt2[0] == 0 || cnt2[1] == 0 || cnt2[2] == 0) continue;
        if (f == 0) j = i + 1, f = 1;
        else cnt[s[i] - 'A']--;
        while ((cnt[0] == 0 || cnt[1] == 0 || cnt[2] == 0) && j <= k - 1) {
            cnt[s[j] - 'A']++;
            j++;
        }
        if (cnt[0] == 0 || cnt[1] == 0 || cnt[2] == 0) {
            break;
        }
        ans += k - j + 1;
    }
    cout << ans;
    return 0;
}