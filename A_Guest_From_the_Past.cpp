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
    LL n, a, b, c;
    cin >> n >> a >> b >> c;

    LL f = n / a;
    LL k = max((LL)0, (n - b) / (b - c));
    n = n - k * (b - c);
    
    if(a <= b - c)
    {
        k = n / a;
    }
    else
    {
        while (n >= b)
        {
            n = n - b + c;
            k++;
        }
        k = k + (n / a);
    }

    cout << max(f, k) << endl;
}

int main() 
{
    Tahmid;

    int t = 1;
    //cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}
