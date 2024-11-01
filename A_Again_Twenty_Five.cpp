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

const LL NN = 2e18 + 25;
const LL mod = 998244353;


ULL binpow(ULL a, ULL b, ULL n) 
{
    ULL res = 1 ;
    while (b > 0) 
    {
        if (b % 2) 
        {
            res = (res * a) % n;
        }
        a = (a * a) % n;
        b = b / 2;
    }
    return res;
}

void ans()
{
    ULL n;
    cin >> n;

    ULL c = binpow(5, n, 100);

    cout << c << endl;

}

int main() 
{
    Tahmid;

    int t = 1;
    // cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}