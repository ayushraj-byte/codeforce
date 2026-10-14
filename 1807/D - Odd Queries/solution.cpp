#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, q;
    cin >> n >> q;
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }
 
    long long total_sum = pref[n];
 
    while (q--) {
        int l, r;
        long long k;
        cin >> l >> r >> k;
        long long replaced_sum = (r - l + 1) * k;
        long long original_range_sum = pref[r] - pref[l - 1];
        long long new_sum = total_sum - original_range_sum + replaced_sum;
 
        if (new_sum % 2 != 0) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
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