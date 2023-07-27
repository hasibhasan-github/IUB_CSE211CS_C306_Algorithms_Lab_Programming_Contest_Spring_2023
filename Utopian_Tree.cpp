#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/nov13/challenges/utopian-tree

using namespace std;

using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n, arr[60];
    cin >> t;
    arr[0] = 1;
    for ( int i = 1; i < 60; ++i ){
        if ( i%2 == 0 ){
            arr[i] = arr[i-1]+1;
        }
        else{
            arr[i] = arr[i-1]*2;
        }
    }
    //for ( int j = 0; j < 60; ++j ){
    //    cout << arr[j] << " ";
    //}
    while ( t-- ){
        cin >> n;
        cout << arr[n] << "\n";
    }

    return 0;
}
