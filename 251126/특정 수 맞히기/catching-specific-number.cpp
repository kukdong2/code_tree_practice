#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num = -1;

    while (num != 25) {
        cin >> num;
        if (num == 25) {
            cout << "Good"<<endl;
        }
        else if (num < 25) {
            cout << "Higher"<<endl;
        }
        else if (num > 25) {
            cout << "Lower"<<endl;
        }
    }
    return 0;
}