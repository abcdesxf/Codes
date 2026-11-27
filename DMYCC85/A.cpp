#include<bits/stdc++.h>
using namespace std;
int h, w, x, y;
int main() {
    cin >> h >> w >> x >> y;
    int f = 0;
    if (h >= x && w >= y) {
        double sx = (h - x) * 1.0 / 2;
        double zy = (w - y) * 1.0 / 2;
        if (sx > 0 && double(int(sx)) == sx && zy > 0 && double(int(zy)) == zy) {
            f |= 1;
        }
    }
    swap(x, y);
    if (h >= x && w >= y) {
        double sx = (h - x) * 1.0 / 2;
        double zy = (w - y) * 1.0 / 2;
        if (sx > 0 && double(int(sx)) == sx && zy > 0 && double(int(zy)) == zy) {
            f |= 1;
        }
    }
    cout << (f == 1 ? "Yes" : "No");
    return 0;
}