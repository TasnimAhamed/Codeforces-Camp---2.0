#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int odd_cnt = 0;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	if (x & 1) {
    		odd_cnt++;
    	}
    }

    cout << (odd_cnt & 1 ? "NO\n" : "YES\n");
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