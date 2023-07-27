#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/womens-codesprint-2/challenges/electronics-shop

using namespace std;

//using ll = long long;

int main (){
    //debugMode();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool done = false;
    int b, n, m, z = 0;
    cin >> b >> n >> m;
    int key[n], mou[m];
    for ( int i = 0; i < n; ++i ){
        cin >> key[i];
    }
    for ( int i = 0; i < m; ++i ){
        cin >> mou[i];
    }
    //sort(key, key+n);
    //sort(mou, mou+n);
    int arr[n*m];
        for ( int j = m-1; j >=0; --j ){
            for ( int k = n-1; k >= 0; --k ){
                arr[z] = mou[j]+key[k];
                z++;
        }
    }
    sort(arr, arr+(z+1));
    int lower = lower_bound(arr, arr+(z+1), b)-arr;
    while ( arr[lower] > b ){
        lower--;
    }
    if ( lower < 0 ){
        cout << -1 << "\n";
    }
    else { 
    cout << arr[lower] << "\n";}
    //bitshifting(n);

    return 0;
}
