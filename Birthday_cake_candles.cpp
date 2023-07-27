#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/rookierank/challenges/birthday-cake-candles

using namespace std;

void birthdayCakeCandles(int arr[], int n){
	int maxx = arr[n-1], count  = 0;
	for(int i = n-1; i >= 0; --i){
		if ( maxx == arr[i] ){
			count++;
		}
	}
	cout << count << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; ++i ){
    	cin >> arr[i];
    }
    sort(arr, arr+n);
    birthdayCakeCandles(arr, n);


    return 0;
}