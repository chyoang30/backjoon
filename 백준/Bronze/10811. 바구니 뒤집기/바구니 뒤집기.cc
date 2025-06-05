// baekjoon_10811: 바구니 뒤집기

#include <iostream>
using namespace std;

int main() {
	int n, m;
	int i, j;
	cin >> n >> m;

	int arr[101] = { 0, };
	for (int a = 1; a <= n; a++) arr[a] = a;

	while (m--) {
		cin >> i >> j;
		int a = i;
		int b = j;

		while (a < b) {
			int temp = arr[a];
			arr[a] = arr[b];
			arr[b] = temp;
			a++; b--;
		}
	}
	for (int a = 1; a <= n; a++) {
		cout << arr[a] << " ";
	}
}