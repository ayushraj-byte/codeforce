#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ans=INT_MAX;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        ans=min(ans,abs(a[i]));
    }
    cout<<ans<<"
";
}
int main(){
    solve();
    return 0;
}