#include <iostream>

using namespace std;

int n;
int return_sum() {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	};
	return sum / 10;

};

int main() {
	cin >> n;
	
	int res = return_sum();
	cout<<res;
	

	return 0;
}

