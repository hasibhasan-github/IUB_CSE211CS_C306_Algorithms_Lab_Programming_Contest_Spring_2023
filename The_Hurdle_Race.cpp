#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/challenges/the-hurdle-race/problem

using namespace std;

int hurdleRace(int arr[], int k, int n){
	sort(arr, arr+n);
	int res = arr[n-1]-k;
	if ( res <= 0 ){
		return 0;
	}
	return res;
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
    r = hurdleRace(arr, k, n);
    cout << r << "\n";
    
    return 0;
}