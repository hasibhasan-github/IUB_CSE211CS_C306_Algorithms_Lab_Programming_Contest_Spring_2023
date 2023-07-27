#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/gs-codesprint-2018/challenges/solve-me-first

using namespace std;

int solveMeFirst(int a, int b) {
 return a+b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, summ;
    cin >> a >> b;
    summ = solveMeFirst(a,b);
    cout << summ << "\n";
    return 0;
}