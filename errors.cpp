// errors.cpp : This file contains a simple throw/catch error program.
//

#include <iostream>
using namespace std;

void mightGoWrong() {


    //toggle these to test the different thorw/catch links
    bool error1 = false;
    bool error2 = true;
    bool error3 = true;

    if (error1) {

         throw 8;
    }

    if (error2) {

        throw "Something went wrong";
    }

    if (error3) {

      throw string("Soemthing else went wrong");
    }



}

void usesMightGoWrong() {
    mightGoWrong();

}


int main()
{
    try {
        usesMightGoWrong();
    }

    catch (int e) {

        cout << "error code: " << e << endl;

    }

    catch (char const* e) {

        cout << "Error code: " << e << endl;

    }

    catch (string & e) {

        cout << "Error code: " << e << endl;
    }

    cout << "And back to working..." << endl;

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
