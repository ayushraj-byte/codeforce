#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    long long x;
    cin >> x;
 
    // Determine number of digits in x
    long long temp = x;
    long long pow10 = 1;
    while (temp > 0) {
        pow10 *= 10;
        temp /= 10;
    }
 
    // y = 10^L + 1 creates x * y = concat(x, x)
    // y has digits {1, 0} (count <= 2)
    // x * y has the exact same set of digits as x (count <= 2)
    long long y = pow10 + 1;
 
    cout << y << "
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