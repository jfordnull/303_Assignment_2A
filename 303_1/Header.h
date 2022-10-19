#pragma once
#include <fstream>
#include <iostream>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;
using std::ostream;

int* readFile(ifstream& data, int& size, int& j);
int search(int arr[], int size, int target);
ostream& modify(int arr[], int i, ostream& out);
int* append(int arr[], int& size, int val, int& j);
int* resize(int arr[], int& size, int j);
int remove(int arr[], int i, int& j);
void output(int arr[], int j);