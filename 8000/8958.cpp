// #8958 OX 퀴즈

#include <iostream>
using namespace std;

int main() {
	int test_case = 0;	// number of test case
	cin >> test_case;

	int *score = new int[test_case];

	for (int i = 0; i < test_case; i++) {
		char quiz[80] = {};
		cin >> quiz;

		score[i] = 0;
		int current_score = 0;

		for (int j = 0; j < 80; j++) {
			if (quiz[j] == NULL) break;
			else if (quiz[j] == 'O') {
				current_score++;
				score[i] += current_score;
			}
			else if (quiz[j] == 'X')
				current_score = 0;	// initialization
		}
		
	}

	// Output
	for (int i = 0; i < test_case; i++)
		cout << score[i] << endl;

	return 0;
}
