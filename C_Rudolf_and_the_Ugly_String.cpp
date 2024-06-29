/*............Bismillahir Rahmanir Raheem...............*/

#include <bits/stdc++.h>
using namespace std;

#define Joldi ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define LL long long int
#define ULL unsigned long long 
#define endl '\n'

#define Unique(v) unique(v.begin(),v.end()) - v.begin()
#define mem(v, x) memset(v, x, sizeof(v))
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))

#define lowerbound(v,x) lower_bound(v.begin(), v.end(), x)-v.begin()
#define upperbound(v,x) upper_bound(v.begin(), v.end(), x)-v.begin()

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define HA " "

const LL NN = 1e9 + 6 + 9;
const LL mod = 998244353;

void ans()
{
    long long int n, f = 0;
    cin >> n;
    string s;
    cin >> s;

    for (long long int i = 0; i < n; i++)
    {
        if((s[i] == 'p') && (s[i + 1] == 'i') && (s[i + 2] == 'e'))
        {
            f++;
            i = i + 2;
        }
        else if((s[i] == 'm') && (s[i + 1] == 'a') && (s[i + 2] == 'p'))
        {
            f++;
            i = i + 2;
        }
    }

    cout << f << endl;
}

int main() 
{
    Joldi;

    int t;
    cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}