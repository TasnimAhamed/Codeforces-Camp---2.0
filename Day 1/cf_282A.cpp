#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    
    int res = 0;
    for (int i = 0; i < n; i++) {
    	string s; cin >> s;
    	
    	if (s[1] == '+') {
    		++res;
    	}
    	else {
    		--res;
    	}
    }

    cout << res << "\n";
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