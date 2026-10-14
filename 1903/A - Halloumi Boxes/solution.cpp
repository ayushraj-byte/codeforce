#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    if (k > 1) {
        cout << "YES
";
    } else {
        if (is_sorted(arr.begin(), arr.end())) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
}
 
int main() {
    // Fast I/O for Codeforces performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}