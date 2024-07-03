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
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();
    
    vector<vector<int>> v(1000,vector<int> (1000,0));
    
    for (int i = 1; i <= m; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            if (s[j - 1] == t[i - 1])
            {
                v[i][j] = 1 + v[i - 1][j - 1];
            }

            else
            {
                v[i][j] = v[i][j - 1];
            }
        }
    }

    int c = 0;
    for (int i = 1; i <= m; i++)
    {
        c = max(c, v[i][n]);
    }
 
    
 
    cout << n + m - c << endl;
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
