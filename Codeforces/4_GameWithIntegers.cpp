// 800  - A
// 1899 - Game With Integers (games, math, number theory)
// https://codeforces.com/problemset/problem/1899/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n % 3 == 0) {
            cout << "Second" << endl;
        }
        else {
            cout << "First" << endl;
        }
    }
}