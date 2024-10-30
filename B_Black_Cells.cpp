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


bool wow(LL n, LL m,const vector<LL>& a)
{
    vector<bool> ok1(n + 1, false);
    vector<bool> ok2(n + 1, false);
  
    ok1[0] = true;
    ok2[0] = false;
  
    for(LL i = 0; i < n; i++)
    {
        vector<bool> ko1(n + 1, false);
        vector<bool> ko2(n + 1, false);
    
        if(ok1[i])
        {
            if(i + 1 < n && (a[i + 1] - a[i]) <= m)
            {
                ko1[i + 2] = true;
            }
            if(m >= 1)
            {
                ko2[i + 1] = true;
            }
        }
    
        if(ok2[i])
        {
            if(i + 1 < n && (a[i + 1] - a[i]) <= m)
            {
                ko2[i + 2] = true;
            }
        }
    
        for(LL j = 0; j <= n; j++)
        {
            if(ko1[j])
            {
                ok1[j] = true;
            }
            if(ko2[j])
            {
                ok2[j] = true;
            }
        }
    }
  
    return ok1[n] || ok2[n];
  
}


void ans()
{
    LL n;
    cin >> n;
    vector<LL> a(n);
    
    for(LL i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    LL l = 0, r = 1e18;
    LL c = r;
    
    while(l <= r)
    {
        LL m = l + (r - l) / 2;
        
        if(wow(n, m, a))
        {
            c = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
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