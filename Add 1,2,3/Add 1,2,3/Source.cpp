#include <stdio.h>
int main() {
	int testCase;
	scanf("%d", &testCase);
	int arr[11];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 4;
	arr[3] = 7;
	int input;
	int temp = 3;
	for (int i = 0; i < testCase; i++) {
		scanf("%d", &input);
		if (temp >= input - 1) {
			printf("%d\n", arr[input - 1]);
		}
		else {
			for (int j = 4; j < input; j++) {
				arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];
			}
			temp = input - 1;
			printf("%d\n", arr[input - 1]);
		}
	}
}