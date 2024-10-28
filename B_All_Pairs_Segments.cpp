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


void ans()
{
    LL n, m;
    cin >> n >> m;
    vector<LL> a(n), v(m);

    for (LL i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (LL i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    
    unordered_map<LL, LL> mp1;


    for (LL i = 1; i <= n; i++) 
    {
        LL c = (i - 1) * (n - i + 1) + (n - i);
        mp1[c]++;

        if (i < n) 
        {
            LL f = a[i] - a[i - 1] - 1;
            if (f > 0) 
            {
                LL k = i * (n - i);
                mp1[k] = mp1[k] + f;
            }
        }
    }

    for (LL i = 0; i < m; i++)
    {
        cout << mp1[v[i]] << HA;
    }
    cout << endl;
}

int main() 
{
    Tahmid;

    int t;
    cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}