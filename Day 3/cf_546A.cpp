#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll k, n, w; cin >> k >> n >> w;

    ll need = k * (w * (w + 1) / 2);
    cout << (need <= n ? 0 : need - n) << "\n";
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