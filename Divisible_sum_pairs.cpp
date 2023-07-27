#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

using namespace std;

int divisibleSumPairs(int n, int arr[], int k){
	int count = 0;
	for ( int i = 0; i < n; ++i ){
		for ( int j = 0; j < n; ++j ){
			if ( ( i < j ) && ((arr[i]+arr[j])%k == 0) ){
				count++;
			}
		}
	}
	return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, r;
    cin >> n >> k;
    int arr[n];
    for ( int i = 0; i < n; ++i ){
    	cin >> arr[i];
    }
    r = divisibleSumPairs(n, arr, k);
    cout << r << "\n";

    return 0;
}