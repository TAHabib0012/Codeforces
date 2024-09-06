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

const LL NN = 1e18 + 6 + 9;
const LL mod = 998244353;

vector<vector<LL>> v;

void precompute() 
{
    v.resize(1001);

    for (LL n = 1; n <= NN; ++n) 
    {
        vector<LL> a;
        a.reserve(n);
        a.push_back(n);

        for (LL i = n - 1; i > 0; --i) 
        {
            LL x = a.back();
            LL y = i;
            if ((x | y) == n) {
                a.push_back(y);
            }
        }

        sort(a.begin(), a.end());
        v[n] = move(a);

        if (v.size() > 1000) 
        {
            break;
        }
    }
}

void ans() 
{
    LL n;
    cin >> n;
    if (v[n].empty()) 
    {
        vector<LL> a;
        a.reserve(n);
        a.push_back(n);

        for (LL i = n - 1; i > 0; --i) 
        {
            LL x = a.back();
            LL y = i;
            if ((x | y) == n) {
                a.push_back(y);
            }
        }

        sort(a.begin(), a.end());
        v[n] = a;
    }

    vector<LL> a = v[n];

    cout << a.size() << endl;
    for (LL i = 0; i < a.size(); ++i) 
    {
        cout << a[i] << HA;
    }
    cout << endl;
}

int main() {
    Tahmid;
    precompute();

    int t;
    cin >> t;

    while (t--) 
    {
        ans();
    }

    return 0;
}
