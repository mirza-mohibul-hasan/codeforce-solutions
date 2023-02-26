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
        ll n, m;
        cin >> n >> m;

        ll arr1[n];
        ll arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        if (n >= m)
        {
            for (int i = 0; i < m; i++)
            {
                arr1[i] = arr2[i];
            }
        }
        else
        {
            sort(arr2, arr2 + m);
            int m = sizeof(arr2) / sizeof(arr2[0]);
            vector<int> v(arr2, arr2 + m);
            vector<int>::iterator it;
            it = unique(v.begin(), v.end());
            v.resize(distance(v.begin(), it));
            long long arr3[v.size()];
            int i = 0;
            for (it = v.begin(); it != v.end(); ++it)
            {
                arr3[i] = *it;
                i++;
            }
            int size = sizeof(arr3)/sizeof(arr3[0]);
            for (int i = 0, j = size - n; i < n, j < size; i++, j++)
            {
                arr1[i] = arr2[j];
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr1[i] << " ";
        // }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr1[i];
        }
        cout << sum << nl;
    }
}