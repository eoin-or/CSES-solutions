#include <bits/stdc++.h>
using namespace std;

int main()
{
	// ios::sync_with_stdio(false);
	// cin.tie(0);

	unsigned long long t, x, y;
	cin >> t;
	vector<pair<unsigned long long, unsigned long long>> a;
	for (unsigned int i = 0; i < t; i++)
	{
		cin >> y >> x;
		a.push_back(make_pair(y, x));
	}

	for (pair<unsigned long long, unsigned long long> p : a)
	{
		unsigned long long i = p.first - 1;
		unsigned long long j = p.second - 1;
		// cout << "(" << i << "," << j << ") ";
		unsigned long long lo = 1 + (max(i, j) * max(i, j));
		unsigned long long hi = (max(i, j)+1) * (max(i, j)+1);

		if (max(i, j) % 2 == 0)
		{
			if (i > j)
				cout << lo + j << '\n';
			else
				cout << hi - i << '\n';
		}
		else
		{
			if (i > j)
				cout << hi - j << '\n';
			else
				cout << lo + i << ' ';
		}
	}

	return 0;
}
