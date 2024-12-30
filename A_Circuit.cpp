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
    LL n, c = 0;
    cin >> n;
    vector<LL> a(n + n);

    for (LL i = 0; i < 2 * n; i++)
    {
        cin >> a[i];

        if (a[i] == 1)
        {
            c++;
        }
        
    }
    LL k = 0, f = c % 2;
    
    if (c <= n )
    {
        k = c;
    }
    else
    {
        k = (2 * n) % c;
    }

    cout << c % 2 << HA << k << endl;
    
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