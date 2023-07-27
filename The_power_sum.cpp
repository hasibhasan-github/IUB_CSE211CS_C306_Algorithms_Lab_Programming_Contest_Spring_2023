#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/challenges/the-power-sum/problem

using namespace std;

//using ll = long long;

int powerSum(int x, int n, int c){
    if ( pow(c, n) < x ){
        return powerSum(x, n, c+1) + powerSum(x-pow(c, n), n, c+1);
    }
    else if ( pow(c,n) == x ){
        return 1;
    }
    else {
        return 0;
    }
}

int main (){
    //debugMode();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, count;
    cin >> x;
    cin >> n;
    count = powerSum(x, n, 1);
    cout << count << "\n";

    return 0;
}
