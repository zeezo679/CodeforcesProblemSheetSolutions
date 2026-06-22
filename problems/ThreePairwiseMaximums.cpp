//https://codeforces.com/contest/1367/problem/A
#include <iostream>
#include "bits/stdc++.h"
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
#define rep1n(i, n) for (int i = 1; i <= (n); ++i)
#define repr(i, n) for (int i = (n) - 1; i >= 0; --i)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(a) (int)(a.size())
#define each(x, a) for (auto &x : a)

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using str = string;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vpi = vector<pair<int, int>>;
using vpl = vector<pair<ll, ll>>;
using vvi = vector<vi>;
using mpii = map<int, int>;
using mpll = map<ll, ll>;
using dqi = deque<int>;
using dql = deque<ll>;
const int MOD = 1e9 + 7;
#define SYNC ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Out   ofstream fout("output.txt");
#define Take  ifstream fin("input.txt"); // redirect cin from file
#define SOl solve();
#define vecbe(v) v.begin(), v.end()
#define arrbe(a,s) a, a+s
#define M_PI           3.14159265358979323846
#define M_E            2.718282
ll modExp(ll a, ll b, ll m) { ll result = 1; while (b > 0) { if (b % 2) result = ((result % m) * (a % m)) % m; a = ((a % m) * (a % m)) % m; b = b / 2; } return result; }
vl DivisorsOf(ll n) { vl res; for (ll i = 1; i * i <= n; i++) { if (n % i == 0) { res.push_back(i); if(i*i!=n) res.push_back(n / i); } } sort(all(res)); return res; }
set<ll> PrimeDivisorsOf(ll n) { set<ll> res; while (n % 2 == 0) { res.insert(2); n /= 2; } for (ll i = 3; i * i <= n; i += 2) while (n % i == 0) { res.insert(i); n /= i; } if (n > 1) res.insert(n); return res; }

int nodes, edges, t;
int temp;
vector<bool> vis(nodes);
vector<vector<int>> adj(nodes);

void solve() {
   int x,y,z ; cin >> x >> y >> z;

   if(x == y && x == z && y == z)
   {
        cout << "YES" << "\n";
        cout << x << " " << y << " " << z;
   }
   else if(x == z && y < x)
   {
        cout << "YES" << "\n";
        if (y == 1)
            cout << x << " " << y << " " << y;
        else
            cout << x << " " << y << " " << y-1;
   }
   else if (x == y && z < x)
   {
        cout << "YES" << "\n";
        if (z == 1)
            cout << x << " " << z << " " << z;
        else
            cout << x << " " << z << " " << z-1;
   }
   else if (y == z && x < y)
   {
        cout << "YES" << "\n";
        if (x == 1)
            cout << x << " " << y << " " << x;
        else
            cout << x << " " << y << " " << x-1;
   }
   else {
        cout << "NO";
   }

   cout << "\n";
}


int main() {
    SYNC
         cin >> t; 
         while(t--)
            SOl
}
