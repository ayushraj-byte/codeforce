#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxi=0;
    int count=0;
    for(auto c:s){
        if(c=='#'){
            count++;
             maxi=max(maxi,count);
        } else {
            count=0;
        }
    }
    cout<<(maxi+1)/2<<"
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