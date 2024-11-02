/*............Bismillahir Rahmanir Raheem...............*/

#include <bits/stdc++.h>
using namespace std;

#define Tahmid ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define LL long long int
#define ULL unsigned long long 
#define endl '\n'

void ans() {
    LL n, m;
    cin >> n >> m;

    map<LL, priority_queue<LL>> mp;

    for (LL i = 0; i < m; i++) 
    {
        LL x, y;
        cin >> x >> y;
        mp[x].push(y);
    }
    
    priority_queue<LL> pq;

    for (auto& [i, j] : mp) 
    {
        LL s = 0;

        while (!j.empty() ) 
        {
            s = s + j.top();
            j.pop();
        }

        pq.push(s);
    }
    
    LL s = 0, c = 0;
    
    while (!pq.empty() && c < n) 
    {
        s = s + pq.top();
        pq.pop();
        c++;
    }
    
    cout << s << endl;
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
