#include<iostream>
#include <sstream>
#include "Inputvalidation.h"
using namespace std;

bool getInputInt(int& input, const string& errorMessage, int min, int max) {
    cout << "Enter an integer value between " << min << " and " << max << ": ";
    cin >> input;

    if (cin.fail() || input < min || input > max) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << errorMessage << endl;
        return false;
    }

    return true;
}
