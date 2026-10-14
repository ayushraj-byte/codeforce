#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n;
    cin>>n;
    int smallfac=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            smallfac=i;
            break;
        }
    }
    int a=n/smallfac;
    int b=n-a;
    cout<<a<<" "<<b<<"
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