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
    vector<int> a(n), b(n);
 
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
 
	int x = 0, y = 0, z = 0, c = 0, f = 0, k = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > b[i])
		{
			x = x + a[i];
		}
		else if(b[i] > a[i])
		{
			y = y + b[i];
		}
		else
		{
			if(a[i] == -1)
            {
                c++;
            }
			else if(a[i] == 1)
            {
                f++;
            }
			else
            {
                k++;
            }
		}
	}
	if(x > y)
	{
		swap(x,y);
	}
	if(x + f <= y)
	{
		x = x + f;
	}
	else
	{
		int temp= (x + y + f) / 2;
		if((x + y + f) % 2 != 0)
		{
			x = temp;
			y = x + 1;
		}
		else
		{
			x = temp;
			y = temp;
		}
	}
	if(y - c >= x)
	{
		cout << x << endl;
	}
	else
	{
		c = c - (y - x);
		if(c%2==1)
		{
			cout << x - (c / 2) - 1 << endl;
		}
		else
		{
			cout << x - (c / 2) << endl;
		}
	}

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