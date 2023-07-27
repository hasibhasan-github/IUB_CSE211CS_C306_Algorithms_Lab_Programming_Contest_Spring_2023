#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/101may14/challenges/sherlock-and-array

using namespace std;

using ll = long long;

void balancedSums(ll arr[], ll n ){
    ll psm[n];
    bool done = true;
    psm[0] = arr[0];
    for ( ll i = 1; i < n; ++i ){
        //cout << arr[i-1] << " " <<arr[i] << '\n';
        psm[i] = psm[i-1]+arr[i];
    }
    //for ( ll j = 0; j < n; ++j ){
    //    cout<< psm[j] << " ";
    //}
    for ( ll j = 1; j < n; ++j ){
        if ( psm[n-1]-psm[j-1] == psm[j] ){
            done = false;
            cout << "YES" << "\n";
        }
    }
    if ( done ){
        cout << "NO" << "\n";
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n, x;
    cin >> t;
    while ( t-- ){
        cin >> n;
        ll arr[n], tmp[n];
        for ( ll i = 0; i < n; ++i ){
            cin >> x;
            arr[i] = x;
            tmp[i] = x;
        }
        sort(tmp, tmp+n);
        if ( (tmp[0] == tmp[n-2] && n > 2) || n == 1 ){
            cout << "YES" << "\n";
        }
        else {
            balancedSums(arr, n);
        }
    }


    return 0;
}
