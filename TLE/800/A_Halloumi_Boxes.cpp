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
    int n , k;
    cin >> n>>k;

    vi arr(n);

    rep(i, 0, n) {
        cin >> arr[i];
    }

    if (k == 1 && !is_sorted(arr.begin(), arr.end())) {
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    
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