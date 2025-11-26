#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int array[2][10][10];
    int N, M; cin >> N >> M;

    for (int k = 0; k < 2; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> array[k][i][j];
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if ((array[0][i][j]) == (array[1][i][j])) {
                cout << "0 ";
            }
            else {
                cout << "1 ";
            }
        }
        cout <<endl;
    }
    return 0;
}