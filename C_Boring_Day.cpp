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
    LL n, m, k, s = 0, c = 0, f = 0;
    cin >> n >> m >> k;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        
        s = s + a[i];

        while (s > k && f <= i)
        {
            s = s - a[f];
            f++;
        }
        if (s >= m and s <= k) 
        {
            c++;
            s = 0;
            f = i + 1;
        }
    }
    
    cout << c << endl;
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