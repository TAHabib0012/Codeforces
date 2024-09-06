#include<bits/stdc++.h>
using namespace std;

const int m = 200002;
vector<int> a;


int wow(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + num % 10;
        num = num /  10;
    }
    return sum;
}

void preC()
{
    long long sum = 0;
    for (int i = 1; i <= m; ++i)
    {
        sum = sum + wow(i);
        a.push_back(sum);
    }
}

void ans()
{
    int n;
    cin >> n;
    
    cout << a[n - 1] << endl;
}

int main() 
{
    int t;
    cin >> t;

    preC();
    while (t--) 
    {
        ans();
    }
    return 0;
}
