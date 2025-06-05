// baekjoon_10813: 공 바꾸기

#include <iostream>
using namespace std;

int main() {
	int n, m;
	int temp;
	cin >> n >> m;
	int arr[101] = { 0 };
	for (int a = 0; a <= n; a++) arr[a] = a;

	while (m--) {
		int i, j;
		cin >> i >> j;
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	
	for (int a = 1; a <= n; a++) {
		cout << arr[a] << " ";
	}
}