/*............Bismillahir Rahmanir Raheem...............*/

#include <bits/stdc++.h>
using namespace std;

#define Tahmid ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define LL long long int
#define ULL unsigned long long 
#define endl '\n'

LL Chicken(vector<string>& b)
{
    LL c = 0;

    for (LL i = 0; i < b.size(); i++)
    {
        LL x = b[i].size();
        for (LL j = 0; j < x - 3; j++)
        {
            if ( b[i][j] == '1' && b[i][j + 1] == '5' && b[i][j + 2] == '4' && b[i][j + 3] == '3')
            {
                c++;
                j = j + 3;
            }
        }

        if ( b[i][x - 3] == '1' && b[i][x - 2] == '5' && b[i][x - 1] == '4' && b[i][0] == '3')
        {
            c++;
        }
        
        if ( b[i][x - 2] == '1' && b[i][x - 1] == '5' && b[i][0] == '4' && b[i][1] == '3')
        {
            c++;
        }
        
        if ( b[i][x - 1] == '1' && b[i][0] == '5' && b[i][1] == '4' && b[i][2] == '3')
        {
            c++;
        }
        
    }
    
    return c;
}




void wow(LL n, LL m, const vector<string>& a, vector<string>& b) 
{
    LL c = 0;

    while (c < (min(n, m) + 1) / 2) 
    {
        string s;

        for (LL j = c; j < m - c; j++) 
        {
            s = s + a[c][j];
        }
        
        for (LL i = c + 1; i < n - c - 1; i++) 
        {
            s = s + a[i][m - c - 1];
        }
        
        if (n - c - 1 > c) 
        {
            for (LL j = m - c - 1; j >= c; j--) 
            {
                s = s + a[n - c - 1][j];
            }
        }
        
        for (LL i = n - c - 2; i > c; i--) 
        {
            s =  s +  a[i][c];
        }

        b.push_back(s);
        c++;
    }
}

void ans() 
{
    LL n, m;
    cin >> n >> m;

    vector<string> a(n), b;  

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    wow(n, m, a, b);

    LL c =  Chicken(b);

    cout << c << endl;
}

int main() 
{
    Tahmid;

    int t;
    cin >> t;

    while (t--) {
        ans();
    }

    return 0;
}
