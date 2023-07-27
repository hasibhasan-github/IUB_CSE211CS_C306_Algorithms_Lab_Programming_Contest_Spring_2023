#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/may-world-codesprint/challenges/compare-the-triplets

using namespace std;

void compareTriplets(int arr[], int brr[]){
	int res[2] = {0};
	for ( int i = 0; i < 3; ++i ){
		if ( arr[i] > brr[i] ){
			res[0] = res[0]+1;
		}
		else if ( arr[i] < brr[i] ) {
			res[1] = res[1]+1;
		}
	}
	cout << res[0] << " " << res[1] << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[3], brr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    cin >> brr[0] >> brr[1] >> brr[2];
    compareTriplets(arr, brr);
    return 0;
}