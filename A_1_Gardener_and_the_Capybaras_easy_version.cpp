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

bool check(string a, string b, string c) {
    if (a <= b && c <= b) {
        return true;
    }
    else if (b <= a && b <= c) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool found = false;
        for (int i = 0; i < s.length() - 2; i++) {
            for (int j = i + 1; j < s.length() - 1; j++) {
                string a = s.substr(0, i + 1);
                string b = s.substr(i + 1, j - i);
                string c = s.substr(j + 1);
                if (check(a, b, c)) {
                    cout << a << " " << b << " " << c << endl;
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        if (!found) {
            cout << ":(" << endl;
        }
    }
    return 0;
}
