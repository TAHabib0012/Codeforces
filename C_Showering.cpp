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
    LL n, m, k;
    cin >> n >> m >> k;
    vector<LL> a;

    while (n--)
    {
        LL x, y;
        cin >> x >> y;

        a.push_back(x);
        a.push_back(y);
    }
    if (a[0] - 0 >= m)
    {
        yes;
        return;
    }
    
    for (LL i = 1; i < a.size() - 1; i++)
    {
        if(i % 2 == 1)
        {
            if (a[i + 1] - a[i] >= m)
            {
                yes;
                return;
            }
            
        }
    }
    
    if (k - a.back() >= m)
    {
        yes;
        return;
    }
    no;

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