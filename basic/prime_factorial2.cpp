#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to calculate factorial
int factorial(int num) {
    int result = 1;
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate factorial if input is prime, otherwise return an error
bool primeFactorial(int num, int &result) {
    if (!isPrime(num)) {
        cout << "Error! Not a prime number." << endl;
        return false; // Indicating error
    }
    result = factorial(num);
    return true; // Indicating success
}

int main() {
    int input, result;
    bool success = false;

    // Get user input
    cout << "Enter a number: ";
    cin >> input;

    // Calculate factorial if input is prime
    success = primeFactorial(input, result);

    // Display result or error message
    if (success) {
        cout << "Factorial of " << input << " is: " << result << endl;
    }

    return 0;
}
