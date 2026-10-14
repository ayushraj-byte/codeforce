#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
bool canFormKTeams(long long k, const vector<long long>& P, long long D, long long N) {
    if (k == 0) return true;
 
    long long total_players_needed = 0;
    for (int i = 0; i < k; i++) {
        long long leader_power = P[N - 1 - i]; 
        long long size_needed = (D / leader_power) + 1;
        
        total_players_needed += size_needed;
    }
    return total_players_needed <= N;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long N, D;
    if (!(cin >> N >> D)) return 0;
 
    vector<long long> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    sort(P.begin(), P.end());
    long long low = 0, high = N;
    long long ans = 0;
 
    while (low <= high) {
        long long mid = low + (high - low) / 2;
 
        if (canFormKTeams(mid, P, D, N)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
 
    cout << ans;
 
    return 0;
}