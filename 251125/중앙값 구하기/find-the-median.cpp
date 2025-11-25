#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, C; cin >> A >> B >> C;
    if ((A > B)&&(A>C)) {
        if (B>C) {
            cout << B;
        }
        else {
            cout<<C;
        }
    }
    else if ((B > A) && (B > C)) {
        if (A > C) {
            cout << A;
        }
        else {
            cout << C;
        }
    }
    else if ((C > A) && (C > B)) {
        if (A > B) {
            cout << A;
        }
        else {
            cout << B;
        }
    }
    return 0;
}