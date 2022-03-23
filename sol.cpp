#include <bits/stdc++.h>

using namespace std;

int get_parity(char ch) {
	return (ch - '0') % 2;
}

void perform_test() {
	string s;
	cin >> s;
	bool checker = false;
	// in order to form two valid subsequences, the parity of the last digit of N
	// must have a matching parity with the previous digits
	for(int i = 0; i < (int) s.size() - 1; i++) {
		checker |= (get_parity(s[i]) == get_parity(s.back()));
	}
	cout << (checker ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
