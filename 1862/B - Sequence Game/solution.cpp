#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> b(n);
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(i>0&&b[i-1]>b[i]){
            ans.push_back(b[i]);
        }
        ans.push_back(b[i]);
    }
    cout<<ans.size()<<"
";
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
    }
    cout<<"
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