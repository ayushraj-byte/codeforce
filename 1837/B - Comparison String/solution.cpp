#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    char elm=' ';
    int count=0;
    int maxi=0;
    for(char ch:s){
        if(ch==elm){
            count++;
        }
        else{
            count=1;
            elm=ch;
        }
        maxi=max(maxi,count);
    }
    cout<<maxi+1<<"
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