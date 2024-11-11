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

vector<LL> a(1e7);


void wow()
{
    for (LL i = 1; i < a.size(); i++)
    {
        a[i] = 1 + a[i / 3];
    }

    for (LL i = 1; i < a.size(); i++)
    {
        a[i] = a[i] + a[i - 1];
    }
}

void ans()
{
    LL n, m;
    cin >> n >> m;
    
    LL c = a[m] - 2 * a[n - 1] + a[n];

    cout << c << endl;
}

int main() 
{
    Tahmid;

    wow();

    int t;
    cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}