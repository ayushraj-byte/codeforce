#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        cout<<"First
";
    }
    else if(b>a){
        cout<<"Second
";
    }
    else {
        if(c%2!=0){
             cout<<"First
";
        }
        else {
          cout<<"Second
"; 
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}