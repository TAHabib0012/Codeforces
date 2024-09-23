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


bool wow(LL s, LL n, LL m, vector<int> a) 
{
    double avg = (s + m) / (double)n;
    double f = avg / 2.0;
    LL c = 0;

    for (int i = 0; i < n; i++) 
    {
        if (a[i] < f) 
        {
            c++;
        }
    }
    
    return c > n / 2;
}

void ans() 
{
    LL n, s = 0;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        s = s + a[i];
    }
    
    int k = *max_element(a.begin(), a.end());

    if (n <= 2) 
    {
        cout << -1 << endl;
        return;
    }

    LL l = 0, r = 1e18, x = -1;
    
    while (l <= r) 
    {
        LL m = l + (r - l) / 2;

        if (wow(s, n, m, a)) 
        {
            x = m;    
            r = m - 1;
        } 
        else 
        {
            l = m + 1; 
        }
    }
    
    cout << x << endl; 
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


#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
#define f first
#define s second
#define endl "\n"
const int mod = 1000000007;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

void solve()
{
    int n, d, k;
    cin >> n >> d >> k;
    vi sweep(n + 2, 0);
    for (int i = 0; i < k; ++i)
    {
        int l, r;
        cin >> l >> r;
        sweep[l]++;
        sweep[r + 1]--;
    }
    vi jobs(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        jobs[i] = jobs[i - 1] + sweep[i];
    }

    int maxe = 0;
    int mini = INT_MAX;
    int bdaymax = 1;
    int bdaymin = 1;
    int cur_sum = 0;
    for (int i = 1; i <= d; ++i)
    {
        cur_sum += jobs[i];
    }
    maxe = cur_sum;
    mini = cur_sum;
    cout << maxe << " " << mini << endl;

    for (int i = 1; (i + d - 1) <= n; i++)
    {
        if (i > 1)
        {
            cur_sum = cur_sum - jobs[i - 1] + jobs[i + d - 1];
            if (cur_sum < 0)
            {
                cur_sum = 0;
            }
            cout << cur_sum << " ";
        }

        if (cur_sum > maxe)
        {
            maxe = cur_sum;
            bdaymax = i;
        }
        if (cur_sum < mini)
        {
            mini = cur_sum;
            bdaymin = i;
        }
    }
    cout << endl;

    cout << bdaymax << " " << bdaymin << endl;

}

signed main()
{
   
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}