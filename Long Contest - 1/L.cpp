#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    vector<int> ans;
    ans.push_back(v[0]);
    for (int i = 1; i < n; i++) {
    	if (v[i] >= v[i - 1]) {
    		ans.push_back(v[i]);
    	}
    	else {
    		ans.push_back(v[i]);
    		ans.push_back(v[i]);
    	}
    }

    cout << ans.size() << "\n";
    for (auto &x : ans) {
    	cout << x << ' ';
    }
    cout << "\n";
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