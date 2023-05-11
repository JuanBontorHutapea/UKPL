//Equivalence Class Partitioning

#include <iostream>
using namespace std;

// Function to determine if a given input is a valid age
bool isValidAge(int age) {
    if (age >= 0 && age <= 120) {
        return true;
    }
    return false;
}

// Test function for Equivalence Class Partitioning
void testIsValidAge() {
    // Valid inputs: 0 to 120
    int validInputs[] = {0, 10, 50, 100, 120};

    // Invalid inputs: less than 0 or greater than 120
    int invalidInputs[] = {-10, -1, 121, 130};

    cout << "Testing valid inputs:\n";
    for (int i = 0; i < sizeof(validInputs)/sizeof(validInputs[0]); i++) {
        if (isValidAge(validInputs[i])) {
            cout << "  Input " << validInputs[i] << " is valid\n";
        } else {
            cout << "  Input " << validInputs[i] << " is invalid\n";
        }
    }

    cout << "Testing invalid inputs:\n";
    for (int i = 0; i < sizeof(invalidInputs)/sizeof(invalidInputs[0]); i++) {
        if (!isValidAge(invalidInputs[i])) {
            cout << "  Input " << invalidInputs[i] << " is invalid\n";
        } else {
            cout << "  Input " << invalidInputs[i] << " is valid\n";
        }
    }
}

int main() {
    testIsValidAge();
    return 0;
}