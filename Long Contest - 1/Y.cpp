#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int st = 0, en = n - 1;
    while (st < en) {
    	if (s[st] != s[en]) {
    		n -= 2;
    		++st;
    		--en;
    	}
    	else {
    		break;
    	}
    }
    cout << n << "\n";
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