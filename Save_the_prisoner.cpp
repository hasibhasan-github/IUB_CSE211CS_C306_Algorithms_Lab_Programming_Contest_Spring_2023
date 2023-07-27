#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/101hack35/challenges/save-the-prisoner

using namespace std;

using ll = long long;


void saveThePrisoner(ll n, ll m, ll s){
    ll res = (s+m-1)%n;
    if ( res == 0 ){
        cout << n << "\n";
    }
    else{
        cout << res << "\n";
    }
}

int main(){
    //debugMode();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n, m, s;
    cin >> t;
    while(t--){
        cin >> n >> m >> s;
        saveThePrisoner(n, m, s);
    }

    return 0;
}
