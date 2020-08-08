// overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Program showing overloading of the assignment operator and use of the copy constructor.
//

#include <iostream>

#include <iostream>
using namespace std;

class Test {
public:
	Test() : id(0), name(" ") {};
	Test(int id, string name) : id(id), name(name) {};
	void print() {
		cout << id << " : " << name << endl;
	}

	const Test& operator=(const Test& other) {
		cout << "Here goes the assignment..." << endl;
		id = other.id;
		name = other.name;

		return *this;
	}

	Test(const Test& other) {
		id = other.id;
		name = other.name;

	}



private:
	int id;
	string name;

};

int main() {


	Test test1(10, "Mike");
	cout << "Print test1: " << flush;
	test1.print();

	Test test2(20, "Boberto");
	cout << "Print test2: " << flush;
	test2.print();

	Test test3;
	test3.operator=(test2);
	cout << "Print test3: " << flush;
	test3.print();

	cout << endl;

	Test test4 = test1;
	test4.print();


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
