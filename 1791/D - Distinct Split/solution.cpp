#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    vector<int> pref(26,0),suff(26,0);
    int dis_pref=0,dis_suff=0;
    for(auto c:s){
        if(suff[c-'a']==0)dis_suff++;
        suff[c-'a']++;
    }
    int sum=0;
    for(auto ch:s){
        int inx=ch-'a';
        if(pref[inx]==0)dis_pref++;
        pref[inx]++;
        suff[inx]--;
        if(suff[inx]==0)dis_suff--;
        sum=max(sum,dis_pref+dis_suff);
    }
    cout<<sum<<"
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