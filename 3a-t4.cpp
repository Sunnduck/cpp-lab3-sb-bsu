#include <iostream>
#include <limits>
using namespace std;

int main() {
    int k, i = 1, sum_k = 0, number;

    // Ask user to enter the amount of integers
    while (true) {
        cout << "Enter the amount of integers to sum = ";
        cin >> k;

        if (cin.fail()) {
            cin.clear(); // Clear the fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Wrong input" << endl;
        }
        else {
            break; // If everything's correct, continue.
        }
    }

    
    do {
        cout << "Enter integer nr. " << i << ": ";
        cin >> number;
        sum_k += number;
        i++;
    } while (i <= k);

    cout << "The total sum of " << k << " integers is: " << sum_k << endl;
    return 0;
}

