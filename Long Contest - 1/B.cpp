#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> dis(n);
    for (auto&x : dis) {
    	cin >> x;
    }
    
    int mx = max({dis[0], 2 * (x - dis.back())});
    for (int i = 1; i < n; i++) {
    	mx = max(mx, dis[i] - dis[i - 1]);
    }
    cout << mx << "\n";
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