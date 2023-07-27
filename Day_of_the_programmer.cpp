#include<bits/stdc++.h>

// Author @Md Hasib Hasan
// https://www.hackerrank.com/contests/w29/challenges/day-of-the-programmer

using namespace std;


bool julianleapyear(int year){
    if ( year%4 == 0 ){
        return true;
    }
    return false;
}

bool gregorianleapyear(int year){
    if ( year%400 == 0){
            return true;
        }
    else if ( year%100 != 0 && year%4 == 0  ){
        return true;
    }
    return false;
}

void dayOfProgrammer(int year){
    if ( year <= 1917 ){
        if ( julianleapyear(year) ){
            cout << "12.09." << to_string(year) <<  "\n";
        }
        else {
            cout << "13.09." << to_string(year) <<  "\n";
        }
    }
    else if ( year > 1918 ){
        if ( gregorianleapyear(year) ){
            cout << "12.09." << to_string(year) <<  "\n";
        }
        else {
            cout << "13.09." << to_string(year) <<  "\n";
        }
    }
    else{
        cout << "26.09." << to_string(year) <<  "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    dayOfProgrammer(n);

    return 0;
}
