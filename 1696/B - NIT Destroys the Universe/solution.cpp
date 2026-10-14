#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
void solve(){
    int n;
    cin>>n;
    int count=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i-1]!=0&&a[i]==0){
            count++;
        }
    }
    if(a[n-1]!=0)count++;
    cout << min(count, 2) << "
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