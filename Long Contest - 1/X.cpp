#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    for (int i = 0; i < (1 << 8); i++) {
    	int _xor = 0;
    	for (auto x : v) {
    		x = x ^ i;
    		_xor ^= x;
    	}

    	if (!_xor) {
    		cout << i << "\n";
    		return;
    	}
    }

    cout << -1 << "\n";
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