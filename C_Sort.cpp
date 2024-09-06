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
    string s, t;
    cin >> s >> t;

    vector<vector<int>> a(n + 1, vector<int>(26, 0));
    vector<vector<int>> b(n + 1, vector<int>(26, 0));

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < 26; j++) 
        {
            a[i + 1][j] = a[i][j];
            b[i + 1][j] = b[i][j];
        }
        a[i + 1][s[i] - 'a']++;
        b[i + 1][t[i] - 'a']++;
    }

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;

        int k = 0;
        for (int i = 0; i < 26; i++) 
        {
            int f = a[y + 1][i] - a[x][i];
            int c = b[y + 1][i] - b[x][i];
            k = k + abs(f - c);
        }

        cout << k / 2 << endl;
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