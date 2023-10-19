#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string gene;
    cin >> gene;
    // sliding window
    int l, r, ans;
    l = 0;
    r = ans = 1;

    while (r < gene.length()) {
        if (gene[r] == gene[r-1]) {
            ans = max(r-l+1, ans);
        } else {
            l = r;
        }
        r++;
    }
    cout << ans;
    return 0;
}
