#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/hourrank-10/challenges/jumping-on-the-clouds-revisited/problem

using namespace std;

//using ll = long long;


int energy = 100;

int helper(int arr[], int n, int k, int start){
    int tmp;
    for ( int i = start; i < n; i = i+k ){
        tmp = i;
        if ( arr[i] == 0 ){
            energy--;
        }
        else{
            energy -= 3;
        }
    }
    //cout << tmp << "\n";
    return (n-tmp);
}

void jumpingOnClouds(int arr[], int n, int k){
    int x, start = k;
    if ( arr[0] == 0 ){
        energy--;
    }
    else{
        energy -= 3;
    }
    while ( true && (k != n) ){
        x = helper(arr, n, k, start);
        if ( x == k ){
            break;
        }
        else{
            start = k-x;
        }
    }

    cout << energy << "\n";
}


int main (){
    //debugMode();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int arr[n];
    for ( int i = 0; i < n; ++i ){
        cin >> arr[i];
    }
    jumpingOnClouds(arr, n, k);

    return 0;
}