// baekjoon_1546: 평균

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	double scores[1000] = { 0 };
	double max = 0;
	for (int i = 0; i < n; i++) {
		cin >> scores[i];
		if (scores[i] > max) {
			max = scores[i];
		}
	}

	double newAverage = 0;
	for (int i = 0; i < n; i++) {
		scores[i] = (scores[i] / max) * 100;
		newAverage += scores[i];
	}
	newAverage /= n;
	cout << newAverage << endl;
}