#include <bits/stdc++.h>
using namespace std;

void ans()
{
    long long int n, f = 0;
    cin >> n;
    string s;
    cin >> s;

    for (long long int i = 0; i < n; i++)
    {
        if((s[i] == 'p') && (s[i + 1] == 'i') && (s[i + 2] == 'e'))
        {
            f++;
            i = i + 2;
        }
        else if((s[i] == 'm') && (s[i + 1] == 'a') && (s[i + 2] == 'p'))
        {
            f++;
            i = i + 2;
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

