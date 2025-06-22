// baekjoon_2675: 문자열 반복
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;


int main() {
	string str;
	int T, R;
	cin >> T;

	while (T--) {
		cin >> R >> str;
		for (int i = 0;i < str.length();i++) {
			for (int j = 0;j < R;j++)
				cout << str[i];
		}
		cout << endl;
	}
}