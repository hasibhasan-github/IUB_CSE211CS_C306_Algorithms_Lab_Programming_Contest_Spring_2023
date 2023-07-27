#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/algorithms-practice-match-2/challenges/missing-numbers

using namespace std;

//using ll = long long;


int main (){
	//debugMode();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n, tmp;
    vector <int> result;
    //result.push_back(5);
    //result.push_back(6);
    map <int, int> array1;
    map <int, int> array2;
    cin >> m;
    int arr[m];
    for ( int i = 0; i < m; ++i ){
    	cin >> arr[i];
    }
    cin >> n;
    int brr[n];
    for ( int i = 0; i < n; ++i ){
    	cin >> brr[i];
    }
    if ( m > n ){
    for ( const int &x: arr ){
    	array1[x]++;
    }
    for ( const int &y: brr ){
    	array2[y]++;
    }
    }
    else {
    for ( const int &y: brr ){
    	array1[y]++;
    }
    for ( const int &x: arr ){
    	array2[x]++;
    }
    }

    for ( auto it = array1.cbegin(); it != array1.cend(); ++it ){
        if ( array2.find(it -> first) != array2.end() && array2[it -> first] == it -> second ){
            //cout << it -> first << '\n';
            continue;
        }
        else{
            tmp = it -> first;
            result.push_back(tmp);
        }
    }
    sort(result.begin(), result.end());
    for ( auto k : result ){
        cout << k << " ";
    }

    return 0;
}