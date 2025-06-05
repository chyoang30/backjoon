// baekjoon_5597: 과제 안 내신 분..?

#include <iostream>
using namespace std;

int main() {
	int arr[31] = { 0 }; // 1번부터 30번까지의 학생 번호를 저장할 배열
	int n = 28;
	int student;

	while (n--) {
		cin >> student;
		arr[student] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (arr[i] == 0) {
			cout << i << endl; // 과제를 제출하지 않은 학생 번호 출력
		}
	}
}