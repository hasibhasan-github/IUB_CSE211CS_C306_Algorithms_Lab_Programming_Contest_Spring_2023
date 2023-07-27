#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/university-codesprint/challenges/mini-max-sum

using namespace std;

using ll = long long;


void miniMaxSum(ll arr[]){
	ll sum1 = 0, sum2 = 0;
	for ( ll j = 0; j < 4; ++j ){
    	sum1 += arr[j];
    }
    for ( ll k = 1; k < 5; ++k ){
    	sum2 += arr[k];
    }
    cout << sum1 << " " << sum2 << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    ll arr[5];
    for ( ll i = 0; i < 5; ++i ){
    	cin >> arr[i];
    }
    sort(arr, arr+5);
    miniMaxSum(arr);
    
    return 0;
}
