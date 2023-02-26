/*Mirza Mohibul Hasan*/
/*CSE-19@JUST*/
#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define mod 1000000007
#define ll long long
#define li long ll
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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        ll arr2[n];
        ll count = 0;
        ll sum = 0;
        for(ll i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]<0){
                arr2[i] = abs(arr[i]);
                count++;
            }
            else{
                arr2[i] = arr[i];
            }
            sum = sum +arr2[i];
        }
        sort(arr2, arr2+n);
        // cout<<sum<<" "<<arr2[0]<<nl;
        if(count%2 == 1){
            cout<<sum-2*arr2[0]<<nl;
        }
        else{
            cout<<sum<<nl;
        }
        // for(ll i=0; i<n-1; i++){
        //     if(max(arr[i], arr[i+1])<0){
        //         arr[i]=arr[i]*-1;
        //         arr[i+1]=arr[i+1]*-1;
        //     }
        // }
        // ll sum = 0;
        // for(ll i=0; i<n; i++){
        //     sum = sum + arr[i];
        // }
        // cout<<sum<<nl;

    }
}