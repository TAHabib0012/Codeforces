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
    int n, c = 0;
    cin >> n;

    string s;
    cin >> s;

    vector<int> mp(n, 0);
    set <int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        mp[i] = st.size();
    }

    st.clear();
    for (int i = n - 1; i >= 0; i--)
    { 
        mp[i] = mp[i] + st.size();
        
        c = max(c, mp[i]);
        st.insert(s[i]);
    }
    
    cout << c << endl;
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