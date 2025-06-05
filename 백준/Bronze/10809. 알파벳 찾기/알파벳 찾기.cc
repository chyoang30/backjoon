// baekjoon_10809: 알파벳 찾기

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s; // 문자열 입력 받기

	for (int i = 97; i <= 122; i++) {	// 'a'부터 'z'까지의 ASCII 코드
		int found = 0; // 해당 알파벳이 문자열에 있는지 여부를 확인하기 위한 변수
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == i) {
				cout << j << " ";
				found = 1; // 해당 알파벳이 문자열에 있음을 표시
				break;
			}
		}
		if (!found) cout << -1 << " "; // 해당 알파벳이 문자열에 없으면 -1 출력
	}
}