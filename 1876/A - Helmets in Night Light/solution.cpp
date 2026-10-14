#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    long long p;
    cin>>n>>p;
    vector<long long>a(n);
    vector<pair<long long,long long>>residents(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> residents[i].first;
        residents[i].second = a[i];
    }
    sort(residents.begin(), residents.end());
    long long total_cost = p;
    long long remaining = n - 1;
    for (int i = 0; i < n && remaining > 0; i++) {
        long long b_i = residents[i].first;
        long long a_i = residents[i].second;
        if (b_i >= p) {
            break;
        }
        long long take = min(remaining, a_i);
        total_cost += take * b_i;
        remaining -= take;
    }
    total_cost += remaining * p;
 
    cout << total_cost << "
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