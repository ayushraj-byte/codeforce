#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    string x;
    cin>>x;
    string s;
    cin>>s;
    int count=0;
    while(x.find(s) == std::string::npos){
        if (count > 6) { 
            cout << -1 << "
";
            return;
        }
        count++;
        x+=x;
    }
    cout<<count<<"
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