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

    int n = s.size(), m = t.size();
    int j = 0;  

    for (int i = 0; i < n && j < m; i++)
    {
        if (s[i] == '?' || s[i] == t[j])
        {
            s[i] = t[j];
            j++;
        }
    }

    if (j < m)
    {
        no;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            s[i] = 'a';
        }
    }

    yes;
    cout << s << endl;
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
