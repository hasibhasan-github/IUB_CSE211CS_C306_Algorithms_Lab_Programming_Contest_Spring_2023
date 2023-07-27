#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/world-codesprint-9/challenges/grading

using namespace std;

void gradingStudents(int arr[], int n){
	for ( int i = 0; i < n; ++i){
		if( (arr[i]+2)%5 == 0 && arr[i] > 37 ){
			cout << arr[i]+2 << "\n";
		}
		else if ( (arr[i]+1)%5 == 0 && arr[i] > 37 ){
			cout << arr[i]+1 << "\n";
		}
		else{
			cout << arr[i] << "\n";
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int arr[n];
    for ( int i = 0; i < n; ++i ){
    	cin >> arr[i];
    }
    gradingStudents(arr, n);

    return 0;
}
