#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>freq(26,0);
    for(char ch:s){
        freq[ch-'a']+=1;
    }
    int odd_count=0;
    for(int count:freq){
        if(count%2!=0){
            odd_count++;
        }
    }
    if(k>=odd_count-1){
        cout<<"YES
";
    }
    else {
        cout<<"NO
";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}