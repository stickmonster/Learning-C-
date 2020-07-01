// Guess the number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>
#include <ctime>
using namespace std;


int main()
{
    srand(time(NULL));

    
   

    int num, guess, tries = 0;
    num = rand() % 100 + 1;
    cout << "Welcome the Guess My Number Game.\n\n";

   

    do {
        cout << "Guess the number\n " << '\n';
        cin >> guess;
        tries++;

        if (guess < num) 
            cout << "Try a little higher!\n" << '\n';

        
        else if (guess > num) 
            cout << "Bit high there. Try something smaller\n" << '\n';

        
        else  
            cout << "Well done! Spot on!\n" << '\n';

          } while (guess != num);
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
