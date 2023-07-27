#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/w27/challenges/drawing-book

using namespace std;

//using ll = long long;

int main(){
   // debugMode();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p;
    cin >> n;
    cin >> p;
    if ( n%2 == 0 && (n-1) == p && n >2 ){
        cout << 1 << "\n";
    }
    else if ( n == p || (n-1) == p ){
        cout << 0 << "\n";
    }
    else if ( (float(n)/2) > p ){
        cout << int(p/2) << "\n";
    }
    else {
        p = n-p;
        cout << int(p/2) << "\n"; 
    }

    return 0;
}