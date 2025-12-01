#include <iostream>
#include <string>

using namespace std;

int A, B;
int game_369(int number){
	int flag = 0;
	string s = to_string(number);
	int leng = s.length();

	if (number % 3 == 0) {
		return 1;
	}
	else {
		for (int i = 0; i < leng; i++) {
			if ((s[i] == '3') || (s[i] == '6') || (s[i] == '9')) {
				return 1;
			}
		}
	}
	
	return 0;
}

int main() {
	cin >> A >> B;
	int cnt = 0;
	int res;
	for (int j = A; j <= B; j++) {
		if (game_369(j) == 1) {
			cnt += 1;
		}
	}
	cout << cnt;
	return 0;
}

