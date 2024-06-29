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
    int n;
    cin >> n;
    string s;
    cin >> s;
    queue<char> q;

    for(int i = 0; i < n; i++)
    {
        q.push(s[i]);
    }

    int flag = 0, count = 0;

    while(!q.empty())
    {
        if(q.front() == 'A')
        {
            flag++;
            q.pop();
        }
        else if(q.front()=='D')
        {
            count++;
            q.pop();
        }
    }

    if(flag > count)
    {
        cout << "Anton" << endl;
    }
    else if(flag < count)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
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