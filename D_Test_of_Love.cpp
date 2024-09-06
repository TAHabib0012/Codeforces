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
    int n, m, k, c = 1;
    cin >> n >> m >> k;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'L')
        {
            i = i + m - 1;
            c = c + m;
        }
        if(s[i] == 'W')
        {
            k = k - 1;
            c++;
        }
        if(s[i] == 'C')
        {
            no;
            return;
        }
    }
    if (c == n +  1)
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