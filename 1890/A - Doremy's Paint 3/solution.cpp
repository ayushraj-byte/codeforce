#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]+=1;
    }
    if(mpp.size()>2){
        cout<<"No
";
    }
    else if(mpp.size()==1) {
        cout<<"Yes
";
    }
    else {
    auto it = mpp.begin();
    int count1 = it->second; 
    it++;
    int count2 = it->second; 
    
    if (abs(count1 - count2) <= 1) {
        cout << "Yes
";
    } else {
        cout << "No
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