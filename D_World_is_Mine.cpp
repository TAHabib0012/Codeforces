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
    LL n,  c = 1;
    cin >> n;
    vector<LL> a(n);
    for (LL i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    LL x = a[0];
    a.erase(a.begin() + 0);
    LL m = a.size();

    vector<bool> mp(m);
    for (LL i = 0; i < n; i++)
    {
        mp[i] = false;
    }

    for (LL i = 0; i < m; i++)
    {
        if(i % 2 == 1)
        {
            for (LL j = 0; j < m; j++)
            {
                if (x < a[j] && !mp[j])
                {
                    mp[j] = true;
                    x = a[j];
                    a[j] = 0;
                    c++;
                    break;
                }
                
            }
            
        }
        if(i % 2 == 0 && !mp[i])
        {
            
            LL z = i,  y  = a[i];
            for (LL j = 0; j < m - 1; j++)
            {
                if (!mp[j] && y <= a[j + 1])
                {
                    y = a[j + 1];
                    z = j + 1;
                }
            }
            mp[z] = true;
            a[y] = 0;
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