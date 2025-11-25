#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N; cin >> N;
    int array[100];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
        cout << array[i] * array[i]<<" ";
    }

    return 0;
}