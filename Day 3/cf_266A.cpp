#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int cnt = 1, ans = 0;
    for(int i = 1; i < n; i++) {
	    if(s[i] == s[i - 1]) {
	        cnt++;
	    }
	    else {
	        ans += (cnt - 1);
	        cnt = 1;
	    }
	}

	ans += (cnt - 1);
	cout << ans << "\n";
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