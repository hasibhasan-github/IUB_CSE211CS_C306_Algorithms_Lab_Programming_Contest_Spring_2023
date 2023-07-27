#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/week-1-1/challenges/a-very-big-sum

using namespace std;

using ll = long long;

ll aVeryBigSum(ll arr[], ll n){
	ll summ = 0;
	for ( ll i = 0; i < n; ++i ){
		summ += arr[i];
		//cout << summ << "\n";
	}
	return summ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, result ;
    cin >> n ;
    ll ar[n];
    for ( ll i = 0; i < n; ++i ){
    	cin >> ar[i];
    }
    result = aVeryBigSum(ar, n);
    cout << result << "\n";
    return 0;
}