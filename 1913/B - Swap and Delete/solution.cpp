#include<bits/stdc++.h>
using namespace std; 
void solve(){
    string s;
    cin>>s;
    int count0=0;
    int count1=0;
    for(auto ch:s){
        if(ch=='0'){
            count0++;
        }
        else count1++;
    }
    for (char ch : s) {
        if (ch == '1') {
            if (count0 > 0) {
                count0--; 
            } else {
                break;
            }
        } else {
            if (count1 > 0) {
                count1--;
            } else {
                break; 
            }
        }
    }
    cout << (count0 + count1) << "
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