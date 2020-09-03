// random.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <random>
#include <iostream>
using namespace std;



std::default_random_engine& global_urng() {
    static std::default_random_engine u{};
    return u;
}

void randomize() {
    static std::random_device rd{};
    global_urng().seed(rd());
}

int pick(int from, int thru)
{
    static std::uniform_int_distribution<> d{};
    using parm_t = decltype(d)::param_type;
    return d(global_urng(), parm_t{ from, thru });
}

double pick(double from, double upto)
{
    static std::uniform_real_distribution <> d{};
    using parm_t = decltype(d)::param_type;
    return d(global_urng(), parm_t{ from, upto });
}




int main()
{
    randomize();
    cout << "Now we roll the dice." << endl;
    for (int i = 0; i < 15; ++i) {
        cout << pick(1, 6) << endl;

        cout << endl << "Now, let's play continuous dice: " << endl;
        for (int i = 0; i < 15; ++i) {
            cout << pick(1.0, 6.0) << endl;
        }
    }

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
