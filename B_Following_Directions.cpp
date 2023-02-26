/*Mirza Mohibul Hasan*/
/*CSE-19@JUST*/
#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define mod 1000000007
#define ll long long
#define li long int
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define nl "\n"
#define fast_run ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    fast_run;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int x = 0, y = 0;
        bool isFound = false;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'L')
            {
                x = x - 1;
            }
            else if (str[i] == 'R')
            {
                x = x + 1;
            }
            else if (str[i] == 'U')
            {
                y = y + 1;
            }
            else if (str[i] == 'D')
            {
                y = y - 1;
            }

            if (x == 1 && y == 1)
            {
                isFound = true;
            }
        }
        if (isFound == true)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}