#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    if (is_sorted(v.begin(), v.end())) {
    	int mn = INT_MAX;
    	for (int i = 1; i < n; i++) {
    		mn = min(mn, (v[i] - v[i - 1]) / 2 + 1);
    	}
    	cout << mn << "\n";
    }
    else {
    	cout << 0 << "\n";
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