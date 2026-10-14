#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int act=0;
    string str;
    cin>>str;
    if(str.find("...") != string::npos){
        cout<<2<<"
";
        return;
    }
    int count=0;
    for(char c:str){
        if(c=='.'){
            count++;
        }
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