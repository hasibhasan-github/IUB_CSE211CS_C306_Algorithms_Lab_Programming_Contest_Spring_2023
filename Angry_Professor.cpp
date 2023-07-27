#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/101hack21/challenges/angry-professor

using namespace std;

void angryProfessor(int count, int k){
	//cout << count << " "<< k ;
	if ( count < k ){
		cout << "YES" << "\n";
	}
	else {
		cout << "NO" << "\n";
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t, k, count = 0;
    cin >> t;
    while ( t-- ) { 
    	cin >> n >> k;
    	int arr[n];
    	for( int i = 0; i < n; ++i ){
    		cin >> arr[i];
    		if ( arr[i] <= 0 ){
    			count++;
    		}
    	}
    	angryProfessor(count, k);
    	count = 0;
	}

    return 0;
}
