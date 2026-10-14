#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b,n;
    cin>>a>>b>>n;
    long long sum=b;
    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        sum += min(a - 1, x);
    }
    cout<<sum<<"
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