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
    vector<pair<int, string>> a(n);
    vector<int>b,c,d;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i].second == "01")
        {
            b.push_back(a[i].first);
        }
        if(a[i].second == "10")
        {
            c.push_back(a[i].first);
        }
        if(a[i].second == "11")
        {
            d.push_back(a[i].first);
        }
    }

    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    sort(b.begin(), b.end());

    if(d.size() > 0 && b.size() > 0 && c.size() > 0)
    {
        cout << min(b[0] + c[0], d[0]) << endl;
    }
    else if (d.size() > 0 && (b.size() == 0 || c.size() == 0))
    {
        cout << d[0] << endl;
    }
    
    else if ( b.size() > 0 && c.size() > 0)
    {
        cout << b[0] + c[0] << endl;
    }
    else
    {
        cout << -1 << endl;
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