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
    string s, t;
    cin >> s >> t;

    vector<string> v;
    while (s != t) 
    {
        string a = "";
        if (s[0] < t[0]) 
        {
            a = a + "R";
            s[0] = s[0] + 1;
        }

        if (s[0] > t[0]) 
        {
            a = a + "L";
            s[0] = s[0] - 1;
        }

        if (s[1] < t[1]) 
        {
            a = a + "U";
            s[1] = s[1] + 1;
        }

        if (s[1] > t[1]) 
        {
            a = a + "D";
            s[1] = s[1] - 1;
        }
        v.push_back(a);
    }

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << endl;
    }

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