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
        int count = 0;
        for (int i = 0; i < n/2; i++)
        {
            if (str[i] == str[n - 1 - i])
            {
                break;
            }
            else
            {
                count++;
            }
        }
        if(count == n){
            cout<<0<<nl;
        }
        else{
            cout << n - count * 2 << nl;
        }
        // cout << n - count * 2 << nl;
    }
}