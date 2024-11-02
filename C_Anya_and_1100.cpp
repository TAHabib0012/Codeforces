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
void ans() {
    string s;
    cin >> s;

    int q;
    cin >> q;

    set<int> st;

    for (int i = 0; i + 3 < s.size(); ++i) 
    {
        if (s[i] == '1' && s[i + 1] == '1' 
        && s[i + 2] == '0' && s[i + 3] == '0') 
        {
            st.insert(i);
        }
    }

    while (q--) 
    {
        int x;
        char y;
        cin >> x >> y;
        x--; 

        if (s[x] == y) 
        {
            if (st.empty()) 
            {
                no;
            } 
            else 
            {
                yes;
            }
            continue;
        }

        for (int i = max(0, x - 3); i <= min((int)s.size() - 4, x); i++) 
        {
            if (st.count(i)) 
            {
                st.erase(i);
            }
        }

        s[x] = y;

        for (int i = max(0, x - 3); i <= min((int)s.size() - 4, x); i++) 
        {
            if (s[i] == '1' && s[i + 1] == '1' 
            && s[i + 2] == '0' && s[i + 3] == '0') 
            {
                st.insert(i);
            }
        }

        if (st.empty()) 
        {
            no;
        } 
        else 
        {
            yes;
        }
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
