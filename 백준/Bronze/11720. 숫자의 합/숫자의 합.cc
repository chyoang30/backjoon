// baekjoon_11720: 숫자의 합

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += s[i] - '0'; // 각 문자를 정수로 변환하여 합산
	}
	cout << sum << endl; // 합산 결과 출력
}