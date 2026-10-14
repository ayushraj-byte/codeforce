#include<bits/stdc++.h>
using namespace std;
void solve(){
    int ans=0;
    char a[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>a[i][j];
            if(a[i][j]=='X'){
                int score = min({i + 1, 10 - i, j + 1, 10 - j});
                ans+=score;
            }
        }
    }
     cout<<ans<<"
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