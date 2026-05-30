#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s[11];
    for (int i = 1; i <= 10; i++) {
    	cin >> s[i];
    }
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
    	for (int j = 0; j < 10; j++) {
    		if (s[i][j] == 'X') {
    			if (i == 1 or i == 10 or j + 1 == 1 or j + 1 == 10) {
    				sum += 1;
    			}
    			else if (i == 2 or i == 9 or j + 1 == 2 or j + 1 == 9) {
    				sum += 2;
    			}
    			else if (i == 3 or i == 8 or j + 1 == 3 or j + 1 == 8) {
    				sum += 3;
    			}
    			else if (i == 4 or i == 7 or j + 1 == 4 or j + 1 == 7) {
    				sum += 4;
    			}
    			else {
    				sum += 5;
    			}
    		}
    	}
    }

    cout << sum << "\n";
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