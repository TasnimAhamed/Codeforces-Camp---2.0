#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    int paisi = 0;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if (x == k) {
    		paisi = 1;
    	}
    }

    if (paisi) {
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