#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/101hack46/challenges/marcs-cakewalk

using namespace std;

using ll = long long;

int main (){
	//debugMode();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x = 0, minsum = 0;
    cin >> n;
    //cout << n << '\n';
    ll arr[n];
    for ( ll i = 0; i < n; ++i ){
    	cin >> arr[i];
    }
    sort(arr, arr+n);
    for ( ll j = n-1; j >= 0; --j ){
    	minsum += (arr[j] << x);
    	x++; 
    	//cout << arr[j] << " ";
    }
    cout << minsum << "\n";

    return 0;
}