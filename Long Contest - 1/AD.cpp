#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
 	int n; cin >> n;
 	if (n <= 9) {
 		cout << n << "\n";
 	}   
 	else {
 		int ans = 9;
 		int pw = 10;
 		while (true) {
            for (int i = 1; i <= 9; i++) {
                if ((i * pw) <= n) {
                    ++ans;
                }
                else {
                    cout << ans << "\n";
                    return;
                }
            }
            pw *= 10;
        }
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