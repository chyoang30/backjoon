// baekjoon_3052: 나머지

#include <iostream>
using namespace std;

int main() {
	int arr[10];
	int count = 0;
	bool check[42] = { false };

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];

		if (check[arr[i] % 42] == false) {
			count++;
			check[arr[i] % 42] = true;
		}
		else {
			continue;
		}
	}
	cout << count << endl;
	return 0;
}