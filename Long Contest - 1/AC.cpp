#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    int res = 0, cnt = 1;
    for (int i = 1; i < n; i++) {
    	if (v[i] % 2 == v[i - 1] % 2) {
    		++cnt;
    	}
    	else {
    		res += (cnt - 1);
    		cnt = 1;
    	}
    }
    res += (cnt - 1);
    cout << res << "\n";
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