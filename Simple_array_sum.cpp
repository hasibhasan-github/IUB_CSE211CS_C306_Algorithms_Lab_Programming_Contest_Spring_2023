#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/challenges/simple-array-sum/problem

using namespace std;

int simpleArraySum(int arr[], int n){
	int summ = 0;
	for ( int i = 0; i < n; ++i ){
		summ += arr[i];
	}
	return summ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, result ;
    cin >> n ;
    int ar[n];
    for ( int i = 0; i < n; ++i ){
    	cin >> ar[i];
    }
    result = simpleArraySum(ar, n);
    cout << result << "\n";
    return 0;
}