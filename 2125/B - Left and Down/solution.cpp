#include <iostream>
#include <numeric> //gcd suar k liye
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long a, b, k;
    cin >> a >> b >> k;
    
    // Find the greatest common divisor of a and b
    long long g = std::gcd(a, b);
    
    // Minimal primitive step vector to move directly towards (0,0)
    long long step_x = a / g;
    long long step_y = b / g;
    
    // If the minimal step vector fits within k, cost is 1. Otherwise, cost is 2.
    if (step_x <= k && step_y <= k) {
        cout << 1 << "
";
    } else {
        cout << 2 << "
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