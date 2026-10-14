#include <iostream>
#include <vector>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int total_sum = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        total_sum += x;
    }
 
    // Two integers have the same parity if and only if their sum is even.
    if (total_sum % 2 == 0) {
        cout << "YES
";
    } else {
        cout << "NO
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