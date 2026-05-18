#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b; cin >> a >> b;
    int cnt = 0;
    while (a <= b) {
    	a *= 3;
    	b *= 2;
    	++cnt;
    }

    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}