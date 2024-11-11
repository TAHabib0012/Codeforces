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


bool wow(LL a, LL b, LL c, LL d)
{
    LL f = 0, k = 0;
    if (a > b)
    {
        f++;
    }
    else if (a < b)
    {
        k++;
    }
    if (c > d)
    {
        f++;
    }
    else if (c < d)
    {
        k++;
    }

    return f > k;

}


void ans()
{
    LL n, m, x, y, c = 0, f = 0, k = 0;
    cin >> n >> m >> x >> y;

    if (wow(n, x, m, y))
    {
        c++;
    }
    if (wow(n, y, m, x))
    {
        c++;
    }
    if (wow(m, x, n, y))
    {
        c++;
    }
    if (wow(m, y, n, x))
    {
        c++;
    }

    cout <<  c << endl;
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