#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string array[10];
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }
    for (int j = 9; j>= 0;j--) {
        cout << array[j];
    }
    return 0;
}