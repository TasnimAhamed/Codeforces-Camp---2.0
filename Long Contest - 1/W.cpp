#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x1, y1; cin >> x1 >> y1;
    int x2, y2; cin >> x2 >> y2;

    int left = x2 - (y2 - y1);
    // cout << left << "\n";
    if (left > x1 or y1 > y2) {
    	cout << -1 << "\n";
    }
    else {
    	cout << abs(x1 - left) + abs(y2 - y1) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}