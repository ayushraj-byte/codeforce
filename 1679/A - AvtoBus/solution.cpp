#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std; 
void solve(){
    long long n;
    cin>>n;
    if(n%2!=0||n<4){
        cout<<-1<<"
";
        return;
    }
    long long minbbus=(n+5)/6;
    long long maxbus=n/4;
    cout<<minbbus<<" "<<maxbus<<"
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