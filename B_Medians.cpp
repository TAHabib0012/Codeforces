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
    vector<int> a;
    

    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    
    if (m == 1 || m == n) 
    {
        cout << -1 << endl; 
        return;
    } 

    
    cout << 3 << endl;
    a.push_back(1);

    if (m % 2 == 0) 
    {
        a.push_back(m); 
        a.push_back(m + 1); 
    } 
    else 
    {
        a.push_back(m - 1); 
        a.push_back(m + 2); 
    }
    for (int i = 0; i < a.size(); i++) 
    {
        cout << a[i] << HA;
    }
    cout << endl;

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