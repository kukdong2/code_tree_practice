#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int temp = 0;
    int cnt3 = 0;
    int cnt5 = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> temp;
        if (temp % 3 == 0) {
            cnt3 += 1;
        }
        if(temp % 5 == 0) {
            cnt5 += 1;
        }
    }
    cout << cnt3<<' '<<cnt5;
    return 0;
}