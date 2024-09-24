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
    int h, m;;
    char c;
    cin >> h >> c >> m;

    do {
        ++m;
        if (m == 60) {
            ++h;
            m = 0;
        }
        if (h == 24) {
            h = 0;
        }
    } while ((h % 10) * 10 + (h / 10) != m);

    cout << setw(2) << setfill('0') << h << c << setw(2) << setfill('0') << m << endl;

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