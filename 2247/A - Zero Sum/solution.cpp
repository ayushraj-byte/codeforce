#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(n%2==0&&sum%4==0){
        cout<<"YES
";
    } else {
        cout<<"NO
";
    }
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