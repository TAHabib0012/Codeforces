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


bool wow(LL n) 
{
    if (n <= 1) return false; 
    if (n == 2) return false; 

    for (LL i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            return true;
        }
    }
    return false;
}


void ans() 
{
    LL n;
    cin >> n;

    if (n <= 4) 
    {
        cout << -1 << endl;
        return;
    }

    vector<LL> a, b, c;

    for (LL i = 1; i <= n; i++) 
    {
        if (i % 2 == 0) 
        {
            b.push_back(i);
        } 
        else 
        {
            a.push_back(i);
        }
    }

    c = a;

    for (LL i = 0; i < b.size(); i++) 
    {
        if (wow(c.back() + b[i])) 
        {
            c.push_back(b[i]);
            b.erase(remove(b.begin(), b.end(), b[i]), b.end());
            break;

        }
    }

    for (LL i = 0; i < b.size(); i++) 
    {
        c.push_back(b[i]);
    }

    for (LL i = 0; i < c.size(); i++) 
    {
        cout << c[i] << HA;
    }
    cout << endl;
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
