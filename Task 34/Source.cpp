#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>

void uniq(int* arr1, int* arr2, const int len1, const int len2) {
	for (int i = 0; i < len1; i++)
		for (int j = 0; j < len2; j++) {
			if (arr1[i] == arr2[j]) {
				arr1[i] = RAND_MAX;
				arr2[j] = RAND_MAX;
			}
		}
	
	for (int i = 0; i < len1; i++)
			if (arr1[i] != RAND_MAX)
				std::cout << arr1[i] << ',';
	for (int j = 0; j < len2; j++)
		if (arr2[j] != RAND_MAX)
			std::cout << arr2[j] << ',';
	std::cout << "\b\b\n";
}

float fract(float num) {
	int num2 = num;
	return num - num2;
}

double double_rand() {
	srand(time(NULL));
	return (double)rand() / (double)((unsigned)RAND_MAX + 1);
}

int main() {
	const int size1 = 4;
	const int size2 = 4;
	int arr1[size1]{ 1, 2, 4, 6 };
	int arr2[size2]{ 3, 2, 5, 6 };
	uniq(arr1, arr2, size1, size2);

	float a = 3.14;
	std::cout << fract(a) << '\n';

	std::cout << double_rand();
	return 0;
}