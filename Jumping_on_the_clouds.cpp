#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

using namespace std;

void jumpingOnClouds(int arr[], int n){
    int count = 0;
    for ( int i = 0; i < n; ++i ){
        if ( arr[i+2] == 0 ){
            count++;
            i = i+1;
        }
        else{
            count++;
        }
    }
    cout << count-1 << "\n";
}

int main(){
    //debugMode();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int cloud[n];
    int tmp[n];
    for ( int i = 0; i < n; ++i ){
        cin >> cloud[i];
    }
    jumpingOnClouds(cloud, n);
    return 0;
}
