#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;

    int cnt = 0;
    while (n <= 25 * m) {
    	if (a.find(b) != string::npos) {
    		cout << cnt << "\n";
    		return;
    	}
    	a += a;
    	n *= 2;
    	++cnt;
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