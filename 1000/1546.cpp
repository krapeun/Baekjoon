// #1546 평균

#include <iostream>
using namespace std;

int main() {
	int N = 0;	// 시험 본 과목의 개수
	cin >> N;

	double *grade = new double[N];
	int M = 0;	// 최고점
	
	for (int i = 0; i < N; i++) {
		cin >> grade[i];
		if (grade[i] > M)	// 최고점 업데이트
			M = grade[i];
	}

	// 새로운 점수 구하기

	double sum = 0;
	double new_score = 0;

	for (int i = 0; i < N; i++) {
		grade[i] = grade[i] / M * 100;
		sum += grade[i];
	}

	cout << sum / N << endl;

	return 0;
}
