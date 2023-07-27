#include <bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/101hack44/challenges/picking-numbers

using namespace std;

int N;
int A[1000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    for(int i=0; i<N; i++)
    {
        int a;
        cin >> a;
        A[a]++;
    }
    int ans=0;
    for(int i=1; i<1000; i++)
        ans=max(ans, A[i-1]+A[i]);
    cout << ans << "\n";
    return 0;
}