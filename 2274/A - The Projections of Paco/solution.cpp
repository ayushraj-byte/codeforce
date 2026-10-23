#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int power = n - 1 - i;
        if (power % 2 == 1) {
            sum -= a[i];
        } else {
            sum += a[i];
        }
    }
    if (n % 2 == 1) {
        cout << sum << "
";
    } else {
        cout << -sum << "
";
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