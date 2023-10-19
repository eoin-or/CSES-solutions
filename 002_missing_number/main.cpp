#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, x;
	int l[n];
	
	unordered_set<int> nums;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		nums.insert(x);
	}

	
	for (int i = 0; i < n; i++)
		if (nums.find(i+1) == nums.end()) {
			cout << i+1;
			return 0;
		}
}
