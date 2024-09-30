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


LL binpow(LL a, LL b, LL n) 
{
    LL res = 1 ;
    while (b > 0) 
    {
        if (b % 2) 
        {
            res = (res * a) % n;
        }
        a = (a * a) % n;
        b = b / 2;
    }
    return res;
}

bool wow(LL n)
{
    if (n < 2) 
    {
        return false;
    } 

    for (LL i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void ans(int z)
{
    LL n;
    cin >> n;

    if (n == 1)
    {
        cout << "Case" << HA << "#" << z << ":" << HA << 1 << endl;
        return;
    }
    
    bool hae = wow(n);
    
    if (hae)
    {
        LL k = binpow(2, n - 1, n);
        k = k % n;

        cout << "Case" << HA << "#" << z << ":" << HA << k << endl;
        return;
    }
    else
    {
        LL k = (n - 1) * (n - 1);
        k = k % n;

        cout << "Case" << HA << "#" << z << ":" << HA << k << endl;
        return;
    }
}

int main() 
{
    Tahmid;

    int t, z = 1;
    cin >> t;
 
    while (z <= t)
    {
        ans(z++);
    }
 
    return 0;
}
