#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    long long prev = 0;
    for (int i = 0; i < n - 1; i++) {
        long long req = prev + 1;
        if (a[i] < req) {
            cout << "NO
";
            return;
        }
        long long excess = a[i] - req;
        a[i + 1] += excess;
        prev = req;
    }
    if (a[n - 1] <= prev) {
        cout << "NO
";
    } else {
        cout << "YES
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