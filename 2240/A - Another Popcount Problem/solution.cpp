#include <bits/stdc++.h>
using namespace std;
 
//--------------------------------------------------
// Typedefs
//--------------------------------------------------
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
using pii = pair<int,int>;
using pll = pair<ll,ll>;
 
using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<pii>;
using vpll = vector<pll>;
 
//--------------------------------------------------
// Constants
//--------------------------------------------------
 
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const double PI = acos(-1.0);
 
//--------------------------------------------------
// Macros
//--------------------------------------------------
 
#define pb push_back
#define ff first
#define ss second
 
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
 
#define sz(x) (int)(x).size()
 
// Loops
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define per(i,a,b) for(int i=(a); i>=(b); i--)
 
//--------------------------------------------------
// Fast IO
//--------------------------------------------------
 
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
//--------------------------------------------------
// Math Utilities
//--------------------------------------------------
 
ll gcd(ll a, ll b) {
    return __gcd(a, b);
}
 
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
 
ll power(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1) ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}
 
ll modPower(ll a, ll b, ll mod = MOD) {
    ll ans = 1;
    while (b) {
        if (b & 1)
            ans = ans * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}
 
 
//--------------------------------------------------
// Solve Function
//--------------------------------------------------
 
void solve() {
    ll n, k;
    cin >> n >> k;
 
    ll ans = 0;
    ll pow = 0;
 
    while(true){
        ll sum = (1LL<<pow)*k;
        if(sum <=n){
            ans+=k;
            n-=sum;
            pow++;
        }
        else{
            ans+=(n/(1LL<<pow));
            break;
        }
    }
    cout << ans <<"
";
 
    
    
}
 
//--------------------------------------------------
// Main
//--------------------------------------------------
 
int main() {
 
    fastIO();
 
    int T = 1;
    cin >> T;
 
    while (T--)
        solve();
 
    return 0;
}