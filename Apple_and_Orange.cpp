#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/w24/challenges/apple-and-orange

using namespace std;

//using ll = long long;

int main(){
	//debugMode();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s, t, a, b, m, n, x, y;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    int count1 = 0, count2 = 0;
    for ( int i = 0; i < m; ++i ){
    	cin >> x;
    	if ( a+x >= s && a+x <= t ){
    		//cout << a << x << '\n';
    		count1++;
    	}
    }
    for ( int j = 0; j < n; ++j ){
    	cin >> y;
    	if ( (b+y >= s) && (b+y <= t) ){
    		//cout << b << y << '\n';
    		count2++;
    	}
    }
    cout << count1 << "\n";
    cout << count2 << "\n";

    return 0;
}
