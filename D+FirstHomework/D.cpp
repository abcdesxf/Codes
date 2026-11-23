#include<bits/stdc++.h>
using namespace std;
struct node {
    int l, r;
}a[100010];
int n, cha[1000010], sum[1000010];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].l >> a[i].r;
        cha[a[i].l]++;
        cha[a[i].r + 1]--;
    }
    int mx = 0;
    for (int i = 0; i <= 1000001; i++) {
        sum[i] = (i - 1 < 0 ? 0 : sum[i - 1]) + cha[i];
        mx = max(mx, sum[i]);
    }
    cout << mx;
    return 0;
}