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


int demoDogs(int n)
{
    int ans = (n*(n+1)*(2*n+1))/6 + (n*(n-1)*(2*n-1))/6 + (n*(n+1))/2;

    return (ans*2022)%mod;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        cout <<demoDogs(n)<<nl;
    }
}