#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B; cin >> A >> B;
    
    while (A <=B) {
        cout << A << " ";
        if (A % 2 == 1) {
            A *= 2;
            //cout << A << " ";
        }
        else if (A % 2 == 0) {
            A += 3;
            //cout << A << " ";
        }
    }
    return 0;
}