#include <iostream>
using namespace std;

int main() {
	// Please write your code here.
	int A, B; cin >> A >> B;
	int res = 0;
	for (int i = A; i <= B; i++) {
		if ((i % 2) == 0) {
			res += i;
		}
		
		}
	if (res == 0) {
		cout << res;
	}
	else{
		cout << res;
	}
	
	return 0;
}