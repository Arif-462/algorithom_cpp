#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;

	vector<pair<int, int>> v;

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		v.push_back({x, i });
	}

	sort(v.begin(), v.end());

	int i = 0;

	int j = n-1 ;

	while (i < j)
    {
		if (v[i].first + v[j].first > x) {
			j--;
		} else if (v[i].first + v[j].first < x) {
			i++;
		} else if (v[i].first + v[j].first == x) {
			cout << v[j].second  << " " << v[i].second << endl;
			return 0;
		}
	}


	cout << "IMPOSSIBLE" << endl;
}
