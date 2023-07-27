#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/challenges/diagonal-difference/problem

using namespace std;

int diagonalDifference(int a, int b){
	return abs(a-b);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, result;
    cin >> n;
    int array[n][n];
    for ( int i = 0; i < n; ++i ){
    	for ( int j = 0; j < n; ++j ){
    		cin >> array[i][j];
    	}
    }
    int le = 0, ri = 0 , left = 0, right = 0;
	for ( int j = 0; j < n; ++j ){
		left += array[le][j];
		le += 1;
	}
	for ( int i = n-1; i >= 0; --i ){
		right += array[ri][i];
		ri += 1;
	}
	result = diagonalDifference(left, right);
	cout << result << "\n";
    return 0;
}