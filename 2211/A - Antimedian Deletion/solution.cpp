#include <bits/stdc++.h>
using namespace std;
 
//--------------------------------------------------
// Typedefs
//--------------------------------------------------
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
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
#define eb emplace_back
#define ff first
#define ss second
#define mp make_pair
 
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
 
#define sz(x) ((int)(x).size())
 
// Loops
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define per(i,a,b) for(int i=(a); i>=(b); i--)
 
// Range-based loops
#define foreach(x,v) for(auto &x : (v))
#define foreach_const(x,v) for(const auto &x : (v))
 
// Input / Output
#define inp(v) for(auto &x : (v)) cin >> x
#define out(v) for(const auto &x : (v)) cout << x << ' '; cout << '
'
 
// Common outputs
#define yes cout << "YES
"
#define no cout << "NO
"
 
#define endl '
'
#define nl cout << '
'
 
// STL shortcuts
#define lb lower_bound
#define ub upper_bound
 
// Vector helpers
#define uniq(v) v.erase(unique(all(v)), v.end())
#define maxele(v) (*max_element(all(v)))
#define minele(v) (*min_element(all(v)))
#define sum(v) accumulate(all(v), 0LL)
 
// Bit manipulation
#define bitcount(x) __builtin_popcountll(x)
#define ctz(x) __builtin_ctzll(x)
#define clz(x) __builtin_clzll(x)
 
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
		if (b & 1)
			ans *= a;
		a *= a;
		b >>= 1;
	}
	return ans;
}
 
ll modPower(ll a, ll b, ll mod = MOD) {
	ll ans = 1;
	a %= mod;
	while (b) {
		if (b & 1)
			ans = ans * a % mod;
		a = a * a % mod;
		b >>= 1;
	}
	return ans;
}
 
ll modInverse(ll a, ll mod = MOD) {
	return modPower(a, mod - 2, mod);
}
 
//--------------------------------------------------
// Debug / Print Helpers
//--------------------------------------------------
 
template<typename T>
void print(T x) {
	cout << x << endl;
}
 
template<typename T>
void print(vector<T> &v) {
	foreach_const(x, v)
	cout << x << ' ';
	cout << endl;
}
 
template<typename T>
void debug(vector<T> &v) {
	cout << "[ ";
	foreach_const(x, v)
	cout << x << ' ';
	cout << "]
";
}
 
template<typename T1, typename T2>
void print(pair<T1, T2> p) {
	cout << p.ff << " " << p.ss << endl;
}
 
//--------------------------------------------------
// Solve Function
//--------------------------------------------------
 
void solve() {
    ll n;
    cin >> n;
    vll num(n);
    inp(num);
    if(n == 1){
        cout << 1 <<endl;
        return;
    }
    for(ll i = 0; i<n; i++){
        cout << 2 <<" ";
    }
    cout << endl;
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