#include <iostream>
using namespace std;

int main() {
	// Please write your code here.
	int num; cin >> num;
	int res = 0;
	for (int i = 1; i <= 100; i++) {
		res += i;
		if (res >= num) {
			cout << i;
			break;
		}
	}
	return 0;
}