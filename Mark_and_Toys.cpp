#include <bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/challenges/mark-and-toys/problem

using namespace std;

using ll = long long;

void maximumToys(ll n, ll k , ll arr[]){
    bool done = true;
    ll psm[n];
    psm[0] = arr[0];
    for ( ll i = 1; i < n ; ++i ){
        psm[i] = psm[i-1]+arr[i];
    }
    for ( ll x = n-1; x >= 0 ; --x ){
        //cout << x << "\n";
        if ( psm[x] <= k  ){
            cout << x+1 <<"\n";
            done = false;
            break;
        }
    }
    if ( done ){
        cout << 0 << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for ( ll i = 0; i < n; ++i ){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    maximumToys(n, k, arr);

    return 0;
}