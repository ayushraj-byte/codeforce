#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ans=0;
    vector<int>a(n);
    vector<int>b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<int> max_a(2 * n + 1, 0), max_b(2 * n + 1, 0);
    int count=0;
    for(int i=0;i<n;i++){
        count++;
        if(i==n-1||a[i]!=a[i+1]){
            max_a[a[i]]=max(max_a[a[i]],count);
            count=0;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        if (i == n - 1 || b[i] != b[i + 1]) {
            max_b[b[i]] = max(max_b[b[i]], count);
            count = 0;
        }
    }
    for (int x = 1; x <= 2 * n; x++) {
        ans = max(ans, max_a[x] + max_b[x]);
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