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
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(arr[i], arr[j]) != 1){
                    count = 0;
                    break;
                }
                else
                {
                    count++;
                }
            }
            if(count==0){
                break;
            }
        }
        if(count >=1){
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
    }
}