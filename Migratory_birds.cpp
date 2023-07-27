#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/rookierank-2/challenges/migratory-birds

using namespace std;

void migratoryBirds( map<int, int>& tmp){
    vector <int> brr(6);
    for ( auto it = tmp.begin(); it != tmp.end(); ++it ){
        brr[it->first] = it->second;
    }
    int maxx = *max_element(brr.begin(), brr.end());
    int out = 0;
    for ( int i = brr.size()-1; i >=0; --i ){
        if ( brr[i] > 0 && brr[i] == maxx ){
            out = i;
        }
    }
    cout << out << "\n";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    map <int, int> tmp;
    cin >> n;
    int arr[n];
    for ( int i = 0; i < n; ++i ){
        cin >> arr[i];
    }
    for( const int &x: arr ){
        tmp[x]++;
    }
    migratoryBirds(tmp);

    return 0;
}
