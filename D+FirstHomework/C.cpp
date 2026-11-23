#include<bits/stdc++.h>
using namespace std;
int n, g1, g2, g3;
int main() {
    cin >> n >> g1 >> g2 >> g3;
    int cnt = 0;
    if (n == g1 || n == g2 || n == g3) {
        cout << "NO";
        return 0;
    }
    while (n > 0) {
        if (n - 3 < 0 || n - 3 == g1 || n - 3 == g2 || n - 3 == g3) {
            if (n - 2 < 0 || n - 2 == g1 || n - 2 == g2 || n - 2 == g3) {
                if (n - 1 < 0 || n - 1 == g1 || n - 1 == g2 || n - 1 == g3) {
                    break;
                }
                n--;
            } else {
                n-=2;
            }
        } else {
            n-=3;
        }
        cnt++;
    }
    if (cnt <= 100 && n == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}