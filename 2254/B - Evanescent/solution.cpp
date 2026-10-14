#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    // Calculate initial compressed length |f(s)|
    int base_len = 1;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] != s[i + 1]) {
            base_len++;
        }
    }
 
    int min_len = base_len; // Default fallback
 
    // Evaluate deleting s[i] for 1 <= i <= n - 2
    for (int i = 1; i <= n - 2; ++i) {
        int old_contrib = (s[i - 1] != s[i] ? 1 : 0) + (s[i] != s[i + 1] ? 1 : 0);
        int new_contrib = (s[i - 1] != s[i + 1] ? 1 : 0);
        
        int current_len = base_len - old_contrib + new_contrib;
        min_len = min(min_len, current_len);
    }
 
    cout << min_len << "
";
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