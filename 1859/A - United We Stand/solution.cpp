#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Fixed: changed a[n] to a[i]
    }
 
    sort(a.begin(), a.end());
    if (a[0] == a[n - 1]) {
        cout << -1 << "
";
        return;
    }
 
    vector<int> b, c;
    for (int i = 0; i < n; i++) {
        if (a[i] == a[n - 1]) {
            c.push_back(a[i]);
        } else {
            b.push_back(a[i]);
        }
    }
 
    int s1 = b.size();
    int s2 = c.size();
 
    cout << s1 << " " << s2 << "
";
    
    for (int i = 0; i < s1; i++) {
        cout << b[i] << (i != s1 - 1 ? " " : "
");
    }
    for (int i = 0; i < s2; i++) {
        cout << c[i] << (i != s2 - 1 ? " " : "
"); // Fixed: s1 -> s2
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}