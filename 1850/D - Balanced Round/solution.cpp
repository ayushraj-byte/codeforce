#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int cnt=1;
    int maxi=1;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]<=k){
            cnt++;
        }
        else {
            cnt=1;
        }
        maxi=max(maxi,cnt);
    }
    cout<<n-maxi<<"
";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}