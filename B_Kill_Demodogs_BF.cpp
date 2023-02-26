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
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 1;
        int i=1, j=1;
        while(1)
        {
            if(i==(n)&&j==(n)){
                    break;
            }
            if (i*(j + 1) >= (i + 1)*j)
            {
                sum = sum + i*(j + 1);
                i = i;
                j = j + 1;
            }
            else
            {
                sum = sum + (i + 1)*j;
                i = i + 1;
                j = j;
            }
        }
        cout << (sum%mod)*2022<<nl;
    }
}