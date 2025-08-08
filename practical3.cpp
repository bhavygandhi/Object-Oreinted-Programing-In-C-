#include <iostream>   // Standard input/output stream
using namespace std;  // Allows use of cout, cin without std:: prefix

int main() {
    int n, i, a = 0, b = 1, c;

    // Prompt user to enter the number of terms in the Fibonacci series
    cout << "Enter the number of terms: ";
    cin >> n;

    // Display header for the output
    cout << "Fibonacci Series is: " << endl;

    // Loop to generate and print Fibonacci series up to n terms
    for (i = 1; i <= n; i++) {
        cout << a << " "; // Print current term

        c = a + b;         // Calculate next term
        a = b;             // Shift a to b
        b = c;             // Shift b to c
    }

    return 0; // Indicate successful execution
}
