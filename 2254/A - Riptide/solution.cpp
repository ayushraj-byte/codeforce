#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
 
    int count = 0;
    while (v[0]!=v[1] && v[1]!=v[2] &&v[0]!= v[2]) {
        sort(v.begin(), v.end());
        v[0]++;
        v[2]--;
        count++;
    }
 
    cout << count << "
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