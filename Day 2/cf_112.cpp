#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string a, b; cin >> a >> b;

    int sz = a.size();
    for (int i = 0; i < sz; i++) {
    	if (tolower(a[i]) > tolower(b[i])) {
    		cout << 1 << "\n";
    		return;
    	}
    	else if (tolower(a[i]) < tolower(b[i])) {
    		cout << -1 << "\n";
    		return;
    	}
    }

    cout << 0 << "\n";
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