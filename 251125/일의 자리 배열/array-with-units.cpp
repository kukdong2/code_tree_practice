#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b; cin >> a >> b;
    int result;
    int array[10] = { a,b };
    cout << a << " " << b << " ";
    for (int i = 2; i < 10; i++) {
        result = array[i - 2] + array[i - 1];
        array[i] = result % 10;
        cout << array[i] << " ";
    }
    return 0;
}