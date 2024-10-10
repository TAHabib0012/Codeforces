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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    map<char, char> mp;
    for (char i = 33; i < 127; i++) 
    {
        mp[i] = i;
    }

    for (int i = 0; i < m; i++) 
    {
        char x, y;
        cin >> x >> y;

        for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            if (it-> second == x) 
            {
                it->second = y;
            } 
            else if (it->second == y) 
            {
                it->second = x;
            }
        }
    }

    for (int i = 0; i < s.size(); i++) 
    {
        s[i] = mp[s[i]];
    }

    cout << s << endl;
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