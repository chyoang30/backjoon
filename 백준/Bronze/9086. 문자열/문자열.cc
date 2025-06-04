// baekjoon 2743

#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	string s;
	cin >> T;

	while (T--)
	{
		cin >> s;
		int final_length = s.length();
		cout << s[0] << s[final_length-1] << endl;
		
	}
	return 0;
}