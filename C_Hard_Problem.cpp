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
    int n, a, b, c, s = 0;
    cin >> n >> a >> b >> c;


    if (n <= a)
    {
        s = s + n;
        a = 0;
    }
    else
    {
        int m = n;
        s = s + a;

        m = m - a;

        if (c >= m)
        {
            s = s + m;
            c = c - m;
        }
        else
        {
            s = s + c;
            c = 0;
        }
    }
    
    if (n <= b)
    {
        s = s + n;
        b = 0;
    }
    else
    {
        int m = n;
        s = s + b;

        m = m - b;

        if (c > m)
        {
            s = s + m;
            c = c - m;
        }
        else
        {
            s = s + c;
            c = 0;
        }
    }

    cout << s << endl;
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