// vector and iterator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//a program to create a vector and iterate through its elements


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector<string> string;

	string.push_back("apple");
	string.push_back("banana");
	string.push_back("imp");

	for (i = 0; i < string.size(); i++) {
		cout << string[i] << endl;
	}

	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
		cout << *it << endl;

	}
	return 0;





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
