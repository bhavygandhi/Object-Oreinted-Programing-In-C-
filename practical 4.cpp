#include <iostream>   // Standard input/output stream
using namespace std;  // Allows use of cout, cin without std:: prefix

// Recursive function to calculate factorial of a number
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    }
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;

    // Prompt user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Call the recursive factorial function and store result
    int result = factorial(num);

    // Display the result
    cout << "Factorial of " << num << " is " << result << endl;

    return 0; // Indicate successful execution
}
