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
    int n;
    cin >> n; 
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end()); 
    int c = n; 
    int l = 1, r = n; 

    while (r >= l) 
    {
        int m = (l + r) / 2;

        if (m == 1) 
        {
            c = min(n - 1, c);
            l = m + 1; 
            continue;
        }

        bool hae = false; 
        for (int i = 0; i <= n - m; ++i) 
        {
            if (a[i] + a[i + 1] > a[i + m - 1]) 
            {
                hae = true; 
                break; 
            }
        }

        if (hae) 
        {
            c = min(n - m, c); 
            l = m + 1; 
        } 
        else 
        {
            r = m - 1; 
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
