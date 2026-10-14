#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    int n;
    cin>>n;
    long long sum_min2=0;
    int global_min1=INT_MAX;
    int min_min2=INT_MAX;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int>a(m);
        for(int j=0;j<m;j++){
            cin>>a[j];
        }
        sort(a.begin(),a.end());
        int min1=a[0];
        int min2=a[1];
        sum_min2+=min2;
        global_min1= min(global_min1,min1);
        min_min2=min(min_min2,min2);
    }
    if(n==1){
        cout<<global_min1<<"
";
    }
    else {
        long long ans=sum_min2-min_min2+global_min1;
        cout<<ans<<"
";
    }
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