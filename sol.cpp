#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		// the number of B's should be equal to the combined number of A's and C's
		int ac = 0;
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] != 'B') {
				ac++;
			}
		}
		cout << (ac == (int) s.size() - ac ? "YES" : "NO") << '\n';
	}
	return 0;
}
