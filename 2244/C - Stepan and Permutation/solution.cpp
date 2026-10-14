#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<long long>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int g = std::gcd(x, y);
    if(g==1){
        cout<<"YES
";
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] % g != i % g) {
            cout << "NO
";
            return;
        }
    }
    cout<<"YES
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