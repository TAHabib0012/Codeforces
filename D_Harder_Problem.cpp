/*............Bismillahir Rahmanir Raheem...............*/

#include <bits/stdc++.h>
using namespace std;

#define Tahmid ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define LL long long int
#define ULL unsigned long long 
#define endl '\n'

#define HA " "

void ans() {
    LL n;
    cin >> n;
    vector<LL> a(n), b(n);
    map<LL, LL> mp;

    for (LL i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    LL x = 1;
    for (LL i = 0; i < n; i++) {
        if (mp[a[i]] > 0) 
        {
            for (LL j = x; j <= n; j++) 
            {
                if (mp[j] == 0) 
                {
                    b[i] = j;
                    mp[j]++;
                    x = j;
                    break;
                }
            }
        } 
        else 
        {
            b[i] = a[i];
            mp[a[i]]++;
        }
    }

    for (LL i = 0; i < n; i++) {
        cout << b[i] << HA;
    }
    cout << endl;
}

int main() {
    Tahmid;

    int t;
    cin >> t;

    while (t--) {
        ans();
    }

    return 0;
}
