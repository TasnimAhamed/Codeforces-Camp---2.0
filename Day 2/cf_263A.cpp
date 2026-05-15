#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int grid[5][5];
    for (auto& row : grid) {
    	for (auto& x : row) {
    		cin >> x;
    	}
    }
    for (int i = 0; i < 5; i++) {
    	for (int j = 0; j < 5; j++) {
    		if (grid[i][j]) {
    			cout << abs(i - 2) + abs (j - 2) << "\n";
    			return;
    		}
    	}
    }
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