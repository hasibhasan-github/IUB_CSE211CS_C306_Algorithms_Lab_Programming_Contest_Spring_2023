#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/feb14/challenges/circular-array-rotation

using namespace std;

int circularArrayRotation(int arr[], int k, int q, int n){
	//cout << k << "\n";
    if ( (k < n-1) && (k+q < n-1)){
        k += q;
    }
	else if ( k+q >= n-1 ){
		k +=q;
		k = k%n;
	}
	//cout << k << "\n";
	return k;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, q, res, qi;
    cin >> n >> k >> q;
    int arr[n];
    int brr[n];
    for ( int i = 0; i < n; ++i ){
    	cin >> arr[i];
    }
    for ( int j = 0; j < n; ++j ){
        if ( k%n == 0 ){
            brr[j] = arr[j];
        }
        else { 
    	res = circularArrayRotation(arr, k%n, j, n); 
    	//cout << j << " " << res << "\n";
    	brr[res] = arr[j];}
    }
    //cout << "\n";
    for ( int k = 0; k < q; ++k ){
    	cin >> qi;
    	cout << brr[qi] << "\n";
    }
    
    
    return 0;
}