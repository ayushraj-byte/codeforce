#include<bits/stdc++.h>
using namespace std;
void req(){
    int n,x;
    cin>>n>>x;
    vector<int>st(n);
    for(int i=0;i<n;i++){
        cin>>st[i];
    }
    int mincap=st[0];
    for(int i=1;i<n;i++){
    mincap=max(mincap,st[i]-st[i-1]);
    }
    mincap=max(mincap,2*(x-st[n-1]));
    cout<<mincap<<"
";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        req();
    }
    return 0;
}