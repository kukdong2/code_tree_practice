#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[3][3];
    int temp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> temp;
            array[i][j]=temp*3;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}