/*............Bismillahir Rahmanir Raheem...............*/

#include <bits/stdc++.h>
using namespace std;

#define Tahmid ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define LL long long int
#define ULL unsigned long long 
#define endl '\n'

#define mem(v, x) memset(v, x, sizeof(v))
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define HA " "

const LL NN = 1e9 + 6 + 9;
const LL mod = 998244353;


vector<pair<LL, LL>> div(LL n) 
{
    vector<pair<LL, LL>> vp;
    for (int i = 1; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            vp.push_back({i, n / i});
        }
    }
    return vp;
}

bool binSar(const vector<LL>& a, LL x) 
{
    int l = 0, r = a.size() - 1;
    while (l <= r) 
    {
        int m = l + (r - l) / 2;
        if (a[m] == x) 
        {
            return true;
        } 
        else if (a[m] < x) 
        {
            l = m + 1;
        } 
        else 
        {
            r = m - 1;
        }
    }

    return false;
}

void ans() 
{
    LL n;
    cin >> n;
    vector<LL> a(n);

    for (LL i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<pair<LL, LL>> vp = div(n - 2);

    for (const auto& p : vp) 
    {
        if (binSar(a, p.first) && binSar(a, p.second)) 
        {
            cout << p.first << HA << p.second << endl;
            return;
        }
    }
}

int main() 
{
    Tahmid;

    int t;
    cin >> t;

    while (t--) 
    {
        ans();
    }
    return 0;
}
