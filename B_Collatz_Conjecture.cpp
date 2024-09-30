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

LL binpow(LL a, LL b) 
{
    if (b == 0)
    {
        return 1;
    }
    LL r = binpow(a, b / 2);
    if (b % 2)
    {
        return r * r * a;
    }
    else
    {
        return r * r;
    }
}

LL wow(LL n, LL m)
{
    for (LL i = 1; i < 31; i++)
            {
                LL z, f =  binpow(m, i);
                if(n % f != 0)
                {
                    n = n / z;
                    break;
                }
                z = f;
            }
            return n;
}

void ans()
{
    LL n, m, k;
    cin >> n >> m >> k;
    if (k == 1)
    {
        n++;
        if (n % m == 0)
        {
            n = wow(n, m);
            cout << n << endl;
            return;
        }
        else
        {
            cout << n << endl;
            return;
        }
    }

    LL x = m - (n % m);
    if (x > k)
    {
        cout << n + k << endl;
        return;
    }
    if (x == k)
    {
        n = n + k;
        n = wow(n, m);
        cout << n << endl;
        return;
    }

    while (true)
    {
        if (n == 1)
            break;

        if (k >= x)
        {
            k = k - x;
            n = n + x;
            n = wow(n, m);
            x = m - (n % m);
        }
        else
        {
            n = n + k;
            k = 0;
            break;
        }
    }
    if (k)
    {
        cout << k % (m - 1) + 1 << endl;
    }
    else
    {
        cout << n << endl;
    }
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