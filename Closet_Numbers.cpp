#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/interfacecse-codedash/challenges/closest-numbers

using namespace std;

using ll = long long;

int main (){
    //debugMode();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, tmp;
    cin >> n;
    ll arr[n];
    ll small = 999999999999999999;
    for ( int i = 0; i < n; ++i ){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for ( int i = 0; i < n-1; ++i ){
        tmp = arr[i+1]-arr[i];
        if ( tmp < small ){
            small = tmp;
        }
    }
    vector<ll> hasib;
    for ( int i = 0; i < n-1 ; ++i ){
        if ( arr[i+1]-arr[i] == small ){
            hasib.push_back(arr[i]);
            hasib.push_back(arr[i+1]);
        }
    }
    for ( auto m : hasib){
        cout << m << " ";
    }
    //cout << small ;
    return 0;
}