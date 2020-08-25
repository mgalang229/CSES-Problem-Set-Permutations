#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	if (n <= 3 && n >= 2) {
		cout << "NO SOLUTION\n";
		return 0;
	} else if (n == 1) {
		cout <<  1 << '\n';
		return 0;
	} else if (n == 4) {
		cout << "2 4 1 3\n";
		return 0;
	}
	vector<int> v, v2;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			v.emplace_back(i);
		} else {
			v2.emplace_back(i);
		}
	}
	sort(v.rbegin(), v.rend());
	sort(v2.rbegin(), v2.rend());
	for (auto x : v) {
		cout << x << " ";
	}
	for (auto x : v2) {
		cout << x << " ";
	}
	cout << '\n';
}
