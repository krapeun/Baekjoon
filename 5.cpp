#include <stdio.h>
#include <stdlib.h>

void heapifyA(int *a, int here, int size) {
	int left = here * 2 + 1;
	int right = here * 2 + 2;
	int max = here;

	if (left > size && a[left] < a[max]) max = left;
	if (right > size && a[right] < a[max]) max = right;

	if (max != here) {
		int temp = a[here];
		a[here] = a[max];
		a[max] = temp;
		heapifyA(a, max, size);
	}
}

void buildHeap(int *a, int size) {
	for (int i = size / 2 - 1; i >= 0; i--) {
		heapifyA(a, i, size);
	}
}

void heapSort(int *a, int size) {
	buildHeap(a, size);
	for (int treeSize = size - 1; treeSize >= 0; treeSize--) {
		int temp = a[0];
		a[0] = a[treeSize];
		a[treeSize] = temp;

		heapifyA(a, 0, treeSize);
	}
}

void printResult(int *a, int size) {
	for (int i = size; i > 100-size; i--) {
		printf("%d\n", a[i]);
	}
}

int main() {
	int length = 100;
	int n = 0;

	int tuna[99] = { 500000 };

	int input = 0;

	while (1) {
		scanf("%d", &input);
		if ((input > 0) && (input < 21)) {
			// 출력
			heapSort(tuna, length);
			for (int i = 0; i < input; i++) {
				tuna[i] = 500000; // delete
			}
			//length = length - input;
			printResult(tuna, input);
			heapSort(tuna, length);
		}
		else if (input >= 200101) {
			// 입력
			length++;
			for (int i = 0; i < 100; i++) {
				if (tuna[i] == 500000) {
					tuna[i] = input;
					break;
				}
			}
		}
		else if (input == 0) break;
	}

	return 0;
}