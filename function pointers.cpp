// function pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool match(string test) {
	return test.size == 3;
}

int countStrings(vector<string>& texts, bool(*match)(string test)) {

	int tally = 0;
	for (int i = 0; i < texts.size(); i++) {

		if (match(texts[i])) {
			tally++;
		}
	}
	return tally;
}

int main()
{
	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("four");
	texts.push_back("five");
	texts.push_back("six");
	texts.push_back("seven");



	cout << count_if(texts.begin(), texts.end(), match) << endl;
	cout << countStrings(texts, match) << endl;
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
