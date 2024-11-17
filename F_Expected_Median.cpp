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

const int NN = 200000;
const int mod = 1e9 + 7;

int b[NN + 1];
int v[NN + 1];


LL binpow(LL a, LL b, LL mod)
{
    LL res = 1;
    while (b > 0)
    {
        if (b % 2)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b = b / 2;
    }
    return res;
}


void preC() 
{
    b[0] = 1;
    for (int i = 1; i <= NN; ++i) 
    {
        b[i] = (1LL * b[i - 1] * i) % mod;
    }

    for (int i = 0; i <= NN; ++i) 
    {
        v[i] = binpow(b[i], mod - 2, mod);
    }
}


int wow(int n, int r) 
{
    if (r > n || r < 0)
    {
        return 0;
    }
    return (1LL * b[n] * (1LL * v[r] * v[n - r] % mod)) % mod;
}


void ans()
{
    LL n, m, c = 0;
    cin >> n >> m;
    vector<LL> a(n);

    for (LL i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i) 
    {
        c = (c + 1LL * a[i] * wow(i, m / 2) % mod * wow(n - i - 1, m / 2) % mod) % mod;
    }

    cout << c << endl;
}


int main() 
{
    Tahmid;
    preC();

    int t;
    cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}
