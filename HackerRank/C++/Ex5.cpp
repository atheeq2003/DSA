// For Loop
// https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
#include <iostream>
using namespace std;
int main() {
    int a,b;
    string n[10]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin >> a >> b;
    for(int i=a;i<=b;i++) {
        if(i>9){
            if(i%2==0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }else {
            cout << n[i] << endl;
        }
    }
    return 0;
}