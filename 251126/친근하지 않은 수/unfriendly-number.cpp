#include <iostream>
using namespace std;

int main() {
	// Please write your code here.
	int num; cin >> num;
	int res = 0;
	for (int i = 1; i <= num; i++) {
		if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0)) {
			res += 1;
		}
	}
	cout << num-res;
	return 0;
}