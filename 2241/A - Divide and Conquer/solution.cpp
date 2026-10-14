#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(x<y){
        cout<<"NO
";
        return;
    }
    if(x%y==0){
        cout<<"YES
";
    }
    else {
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