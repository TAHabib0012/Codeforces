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
    LL n, m, s = 0, c = 0;
    cin >> n >> m;
    
    
    vector<LL> a(n + 1);
    a[0] = 0;
    for (LL i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    
    sort(a.begin(), a.end());

    if (n >= m) 
    {
        cout << m << endl;
        return;
    }

    for (LL i = 1; i <= n; i++)
    {
        if (s + (n - i + 1) * (a[i] - a[i - 1]) >= m)
        {
            c = c + (m - s);
            break;
        }
        c = c + (n - i + 1) * (a[i] - a[i - 1]) + 1;
        s = s + (n - i + 1) * (a[i] - a[i - 1]);
    }

    cout << c << endl; 
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
