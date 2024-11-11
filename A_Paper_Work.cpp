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
    LL n, c = 0;
    cin >> n;
    vector<LL> a(n), b;

    for (LL i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }

    LL x = 0;
    LL y = 0;
    
    for (LL i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            y++;
        }
        else
        {
            if (x < 2)
            {
                x++;
                y++;
            }
            else
            {
                b.push_back(y);
                x = y = 1;
            }
            
        }
    }
    if (y)
    {
        b.push_back(y);
    }
    cout << b .size() << endl;

    for (LL i = 0; i < b.size(); i++)
    {
        cout << b[i] << HA;
    }
    cout << endl;

}

int main() 
{
    Tahmid;

    int t = 1;
    //cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}