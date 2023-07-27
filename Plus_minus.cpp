#include<bits/stdc++.h>

using namespace std;

// Author @Md Hasib Hasan
// https://www.hackerrank.com/challenges/plus-minus/problem

void plusMinus( double pos, double neg, double zero, double n ){
	cout << fixed;
	cout << setprecision(6) << pos/n << "\n";
	cout << setprecision(6) << neg/n << "\n";
	cout << setprecision(6) << zero/n << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n, x, pos = 0, neg = 0, zero = 0;
    cin >> n;
    //double arr[n];
    for(double i = 0; i < n; ++i){
    	cin >> x;
    	if ( x > 0 ){
    		pos++;
    	}
    	else if ( x < 0 ){
    		neg++;
    	}
    	else{
    		zero++;
    	}
    }
    plusMinus(pos, neg, zero, n);

    return 0;
}
