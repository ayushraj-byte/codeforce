#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x %= k;
        if (x == 0) x = k;
        a[i] = {x, i + 1};
    }
    
    // Sort health descending, then index ascending
    sort(a.begin(), a.end(), [](const pair<int, int>& p1, const pair<int, int>& p2) {
        if (p1.first != p2.first) return p1.first > p2.first;
        return p1.second < p2.second;
    });
    
    for (int i = 0; i < n; i++) {
        cout << a[i].second << (i == n - 1 ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}