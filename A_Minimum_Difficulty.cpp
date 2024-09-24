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

#include<bits/stdc++.h>
using namespace std;

void ans()
{
    long long  n, s = 20000;
    cin >> n ;
    vector<long long> a(n);

    for(long long  i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(long long i = 1; i < n - 1; i++)
    {
        long long c = 0, x = 0;
        vector<long long> b = a;
        remove(b.begin(), b.end(), a[i]);
        for(long long j = 0; j < b.size() - 2; j++)
        {
            c =  b[j + 1] - b[j];
            x = max(x, c);
        }
        s = min(s, x);
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