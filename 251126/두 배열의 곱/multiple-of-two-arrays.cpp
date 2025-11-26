#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[2][3][3];
    for (int k = 0; k < 2; k++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> array[k][i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << (array[0][i][j])*(array[1][i][j])<<" ";
        }
        cout <<endl;
    }
    return 0;
}