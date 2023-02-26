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

int fact(int n)
{
    return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}
int main()
{
    fast_run;
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        if (k<2)
        {
            cout <<-1 << nl;
        }
        else
        {
            cout <<k-1<< nl;
        }
    }
}