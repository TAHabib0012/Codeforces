#include<bits/stdc++.h>
using namespace std;

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t = 1;
    //cin >> t;
 
    while(t--)
    {
        ans();
    }
 
    return 0;
}