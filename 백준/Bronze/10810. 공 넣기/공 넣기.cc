// baekjoon 10810: 공 넣기

#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int arr[101] = { 0 };

	while (m--) {
		int i, j, k;
		cin >> i >> j >> k;

		for (int a = 1; a <= n;a++) {
			if (a >= i && a <= j) {
				arr[a] = k;
			}
		}
	}

	for (int a = 1; a <= n; a++) {
		cout << arr[a] << " ";
	}
}