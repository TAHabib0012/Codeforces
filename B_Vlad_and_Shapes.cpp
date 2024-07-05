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
    int n, c  = 0;
    cin >> n;

    vector<vector<char>> v(n + 1, vector<char> (n+ 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> v[i][j];
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        int f = 0;
        for (int j = 1; j <= n; j++)
        {
            if (v[i][j] == '1')
            {
                f++;
            }
        }
        if(f % 2 == 1 && c != f && c % 2 == 1)
        {
            cout << "TRIANGLE" << endl;
            return;
        }
        c = f;
    }
    cout << "SQUARE" << endl;
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