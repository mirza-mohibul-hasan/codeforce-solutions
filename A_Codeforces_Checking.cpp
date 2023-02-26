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
    cin>>t;
    while(t--){
        string str = "codeforces";
        char c;
        cin>>c;
        bool isAvailabe = false;
        for(int i = 0; i<str.length(); i++ ){
            if(str[i]==c){
                isAvailabe = true;
                break;
            }
        }
        if(isAvailabe == true){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }

    }
}