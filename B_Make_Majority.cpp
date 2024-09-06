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
    int n, c = 0, f = 0, k = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            c++;
        }
    }
    bool hae = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            f++;
        }
        else
        {
            if(f > 0)
            {
                k++;
                f = 0;
            }
        }
        
    }
    if(f > 0)
    {
        k++;
        f = 0;
    }

    if(k < c)
    {
        yes;
    }
    else
    {
        no;
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