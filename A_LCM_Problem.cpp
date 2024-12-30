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

    if (n * 2 <= m)
    {
        if (lcm(n, n * 2) <= m && lcm(n, n * 2) >= n)
        {
            cout << n << HA << n * 2 << endl;
        }
        else
        {
            cout << -1 << HA << -1 << endl;
        }
        
    }
    else
    {
        cout << -1 << HA << -1 << endl;
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