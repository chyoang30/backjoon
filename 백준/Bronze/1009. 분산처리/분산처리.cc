// backjoon_1009.cpp

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	int  a, b;
	int dp[11][5] = { 0, };

	cin >> T;

	while (T--) {
		cin >> a >> b;
		a = a % 10;	// 1의자리만 추출

		if (a == 0) {
			cout << 10 << endl;	// 1의 자리가 0이면 10번째임
			continue;
		}
		b = b % 4;	// 순환되는 숫자 중에 몇 번째인지
		if (b == 0) b = 4;	// 4로 나누어 떨어지면 4번째임
		int result = 1;	// 1에서 시작
		
		if (dp[a][b] != 0) {
			cout << dp[a][b] << endl; // 이미 계산된 값이 있다면 바로 출력
			continue;
		}
		else
			for (int i = 1; i < 5; i++) {	// 계산된 값이 없다면 계산
				result = result * a;
				dp[a][i] = result % 10;	// 1의 자리만 저장
			}
			cout << dp[a][b] << endl;	// 계산된 값을 출력
	}

	return 0;
}