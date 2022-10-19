#include "Header.h"

int main() {

	/*
	j = index of last element + 1
	size = capacity of array
	val = user value
	i = user index
	*/

	int j = 0, size = 100, val, i;

	//Reading data to array
	ifstream data;
	data.open("SampleInput.txt");
	int* arr = readFile(data, size, j);
	output(arr, j);
	
	//Testing search
	
	cout << "Enter value to search for:" << endl;
	cin >> val;
	cout << "Found at index: " << search(arr, size, val) << endl;
	
	//Testing modify
	try {
		cout << "Enter index to modify:" << endl;
		cin >> i;
		if (cin.fail()) {
			throw std::ios_base::failure("Input must be of type int");
		}
		if (i < 0) {
			throw std::out_of_range("The index passed should be at least 0.");
		}
		if (i >= j) {
			throw std::out_of_range("There is no value at this index yet.");
		}
		modify(arr, i, cout);
		output(arr, j);
	}

	catch (std::out_of_range& err) {
		std::cerr << "Out of range error." << endl;
		std::cerr << err.what() << endl;
		std::abort();
	}

	catch (std::ios_base::failure& err) {
		std::cerr << err.what() << endl;
		std::abort();
	}

	//Testing append
	try {
		cout << "Enter value to append:" << endl;
		cin >> val;
		if (cin.fail()) {
			throw std::ios_base::failure("Input must be of type int");
		}
		arr = append(arr, size, val, j);
		cout << "Value appended to index " << j - 1 << endl;
		output(arr, j);
	}

	catch (std::ios_base::failure& err) {
		std::cerr << err.what() << endl;
		std::abort();
	}
	
	//Testing remove
	cout << "Enter index to remove:" << endl;
	cin >> i;
	cout << remove(arr, i, j) << " was removed" << endl;
	output(arr, j);

	return 0;
}