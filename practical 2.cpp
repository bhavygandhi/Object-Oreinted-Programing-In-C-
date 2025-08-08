#include <iostream>   // Standard input/output stream
using namespace std;  // Allows use of cout, cin without std:: prefix

int main() {
    int N, i, j, flag;

    // Prompt user to enter the upper limit for prime number search
    cout << "Enter the value of N\n";
    cin >> N;

    // Loop through numbers from 2 to N
    for (i = 2; i <= N; i++) {
        flag = 0; // Assume current number i is prime

        // Check if i is divisible by any number from 2 to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1; // i is not prime
                break;    // No need to check further
            }
        }

        // If flag is still 0, i is prime (and N is not 1)
        if (flag == 0 && N != 1)
            cout << i << " "; // Print the prime number
    }

    return 0; // Indicate successful execution
}
