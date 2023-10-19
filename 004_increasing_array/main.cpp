#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    long long moves = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0)
            continue;
        if (a[i] >= a[i-1])
            continue;
        else {
            moves += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }

    cout << moves;
	return 0;
}
