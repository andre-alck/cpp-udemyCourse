#include <iostream>

#define NEW_LINE std::cout << std::endl;

void showArray1(int arr[], const int size_arr) {
	for(int i = 0; i < size_arr; i++) {
		std::cout << arr[i] << std::endl;
	}
}

void showArray2(int* arr, const int size_arr) {
	for(int i = 0; i < size_arr; i++) {
		std::cout << arr[i] << std::endl;
	}
}

void showArray3(int (&arr)[3]) {
	for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		std::cout << arr[i] << std::endl;
	}
}

//will return array
int* getArray(void) {
	int* arr = new int[3];

	return arr;
}

void freeMemory(int* ptr_mem) {
	delete [] ptr_mem;
}

int main(void) {
	int arr[] = {
		1,
		2,
		3
	};

	const int size_arr = (sizeof(arr) / sizeof(arr[0]));

	showArray1(arr, size_arr);
	NEW_LINE;
	showArray2(arr, size_arr);
	NEW_LINE;
	showArray3(arr);
	NEW_LINE;

	int *ptr_memory = getArray();
	freeMemory(ptr_memory);

	return 0;
}
