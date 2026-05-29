#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> v(n);
    for (auto& x : v) {
    	cin >> x;
    }

    if (v[0] != 1) {
    	cout << "NO\n";
    	return;
    }

    int nn = n;
    while (nn--) {
    	for (int i = 1; i < n - 1; i++) {
    		if (v[i] > v[i - 1] and v[i] > v[i + 1]) {
    			swap(v[i], v[i + 1]);
    		}
    	}
    }

    if (is_sorted(v.begin(), v.end())) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
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