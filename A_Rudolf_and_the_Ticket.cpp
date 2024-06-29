#include <bits/stdc++.h>
using namespace std;

void ans()
{
    int n, m, k, f = 0;
    cin >> n >> m >> k;
    
    vector<int> b(n), c(m);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if((b[i] + c[j]) <= k)
            {
                f++;
            }
        }
    }

    cout << f << endl;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}