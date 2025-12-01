#include <iostream>

using namespace std;

int n;

int main() {
	cin >> n;
	int k = 0;
	int array[9] = { 1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << array[k]<<" ";
			k++;
			k %= 9;
		}
		cout << endl;
	}

	return 0;
}

