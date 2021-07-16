// #4344 평균은 넘겠지

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int C = 0; // test case
	cin >> C;

	double *percent = new double[C];

	for (int i = 0; i < C; i++) {
		int N = 0;	// number of student
		cin >> N;

		int *student = new int[N];
		int sum = 0;		// sum of score
		double mean = 0;	// mean of score
		int over_score = 0;	// number of student > mean

		for (int j = 0; j < N; j++) {
			int score = 0;
			cin >> score;
			student[j] = score;
			sum += score;
		}

		mean = (double) sum / (double) N;

		for (int j = 0; j < N; j++)
			if (student[j] > mean) over_score++;

		percent[i] = round(((double) over_score / (double) N) * 100000) / 100000;
	}

	// Output
	for (int i = 0; i < C; i++) {
		//cout.precision(5);
		//cout << percent[i] * 100 << "%\n";
		printf("%.3f", percent[i] * 100);
		cout << "%" << endl;
	}
}
