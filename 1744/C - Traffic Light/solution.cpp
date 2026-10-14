#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n;
    char ch;
    cin>>n>>ch;
    string s;
    cin>>s;
    if (ch == 'g') {
        cout << 0 << "
";
        return;
    }
    
    s+=s;
    int last_g=-1;
    int ans =0;
    for (int i = 2 * n - 1; i >= 0; i--) {
        if (s[i] == 'g') {
            last_g = i;
        }
        if (s[i] == ch && i < n && last_g != -1) {
            ans = max(ans, last_g - i);
        }
    }
    cout<<ans<<"
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