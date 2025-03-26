#include <bits/stdc++.h>
using namespace std;

// Macros for fast coding
#define fastio() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>

const int MOD = 1e9 + 7;
const ll INF = 1e18;

// Function to solve each test case
void solve() {
    int n , x;
    cin >> n>>x;
    vi arr(n);
    rep(i, 0, n) {
        cin >> arr[i];
    }

    int last = 0 ;
    int ans  = INT_MIN;
    for (int i = 0 ; i<n ; i++){
        ans = max(ans , arr[i]-last);
        last = arr[i];
    }
    ans = max(ans , 2*(x-last));
    cout << ans << endl;

    
    
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}