#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N; cin >> N;
    int array[100]; 
    for (int j = 0; j < N; j++) {
        cin >> array[j];
    }

    for (int i= (N-1); i > -1; i--) {
        if (array[i] % 2 == 0) {
            cout << array[i]<<" ";
        }
    }

    return 0;
}