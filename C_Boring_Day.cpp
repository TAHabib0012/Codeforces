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
    LL n, m, k, s = 0;
    cin >> n >> m >> k;
    vector<int> v(n + 1, 0);
    
    for (int i = 1; i <= n; ++i) 
    {
        cin >> v[i];
        s = s + v[i];
    }

    if (s < m) 
    {
        cout << "0" << endl;
        return;
    }

    LL f = 0;
    int i = 1;
    while (i <= n) 
    {
        if (v[i] > k) 
        {
            ++i;
        } 
        else if (v[i] >= m && v[i] <= k) 
        {
            f++;
            i++;
        } 
        else if (v[i] < m && i != n) 
        {
            LL r = 0;
            int c = -1;
            for (int j = i; j <= n; ++j) 
            {
                r += v[j];
                if (r > k) 
                {
                    break;
                }
                if (r >= m && r <= k) 
                {
                    c = j;
                    break;
                }
            }
            if (c != -1) 
            {
                f++;
                i = c + 1;
            }
            if (c == -1) 
            {
                i++;
            }
        } 
        else 
        {
            i++;
        }
    }
    cout << f << endl;
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