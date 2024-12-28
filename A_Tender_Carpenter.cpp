/*............Bismillahir Rahmanir Raheem...............*/

#include <bits/stdc++.h>
using namespace std;

#define Tahmid                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
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
    int n;
    cin >> n;
    vector<LL> a(n);

    for (LL i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool hae = true;

    for (int i = 0; i < n; i++)
    {
        if (i - 1 >= 0 && a[i - 1] >= a[i])
        {
            if (2 * a[i] > a[i - 1])
            {
                hae = false;
                break;
            }
        }
        else if (i - 1 >= 0 && a[i - 1] < a[i])
        {
            if (2 * a[i - 1] > a[i])
            {
                hae = false;
                break;
            }
        }

        if (i + 1 <= n - 1 && a[i + 1] >= a[i])
        {
            if (2 * a[i] > a[i + 1])
            {
                hae = false;
                break;
            }
        }
        else if (i + 1 <= n - 1 && a[i + 1] < a[i])
        {
            if (2 * a[i + 1] > a[i])
            {
                hae = false;
                break;
            }
        }
    }

    if (!hae)
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

    while (t--)
    {
        ans();
    }

    return 0;
}