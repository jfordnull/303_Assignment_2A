#include "Header.h"

/*Reads data from file (data) to fill array. Increments j as elements are added. 
Calls resize function if input exceeds capacity (size). Returns a pointer to array in memory.*/
int* readFile(ifstream& data, int& size, int& j) {
	int* arr = new int[size], num;
	while (data >> num) {
		if (j >= size) {
			arr = resize(arr, size, j);
			cout << "Array can now hold size " << size << endl;
		}
		arr[j] = num;
		j++;
	}
	return arr;
}

//Linear search through array. Returns index of target if found, otherwise -1
int search(int arr[], int size, int target) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			return i;
		}
	}
	return -1;
}

/*Updates value at index i with user input. Returns output stream specifying new
and original value to user.*/
ostream& modify(int arr[], int i, ostream& out) {
	int val1, val2;
	cout << "Enter new value:" << endl;
	cin >> val2;
	if (cin.fail()) {
		throw std::ios_base::failure("Input must be of type int");
	}
	val1 = arr[i];
	arr[i] = val2;
	out << "Old value: " << val1 << endl << "New value: " << val2 << endl;
	return out;
}

/*Appends value (val) to j (index of last element + 1). Calls resize if capacity
exceeded. Increments j and returns a pointer to array.*/
int* append(int arr[], int& size, int val, int& j) {
	if (j >= size) {
		arr = resize(arr, size, j);
		cout << "Array can now hold size " << size << endl;
	}
	arr[j] = val;
	j++;
	return arr;
}

/*Resizes array by creating new dynamic array. Size x 2. Copies old array into new 
array. Returns pointer to new array.*/
int* resize(int arr[], int& size, int j) {
	int* arr2 = new int[size * 2];
	for (int i = 0; i < j; i++) {
		arr2[i] = arr[i];
	}
	delete[]arr;
	arr = NULL;
	size *= 2;
	return arr2;
}

/*Removes value at i by shifting all the elements that follow by -1 (up to j). 
Decrements j. Returns value of element removed.*/
int remove(int arr[], int i, int& j) {
	int val = arr[i];
	for (int k = i; k < j; k++) {
		arr[k] = arr[k + 1];
	}
	arr[j] = 0;
	j--;
	return val;
}

//Output function for testing
void output(int arr[], int j) {
	cout << "Array status:" << endl;
	for (int i = 0; i < j; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}