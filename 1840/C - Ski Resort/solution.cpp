#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    long long days=0;
    long long ans=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=q){
            days++;
        }
        else {
            if(days>=k){
           long long L = days - k + 1;
            ans += (L * (L + 1)) / 2;
            }
            days=0;
        }
    }
    if (days >= k) {
        long long L = days - k + 1;
        ans += (L * (L + 1)) / 2;
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