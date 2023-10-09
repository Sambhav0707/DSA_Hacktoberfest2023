#include <iostream>
#include <vector>

std::vector<long long> memo; // Memoization table to store computed Fibonacci values

// Function to calculate the nth Fibonacci number using dynamic programming
long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    if (memo[n] != -1) {
        return memo[n]; // Return the precomputed value if available
    }

    // Calculate Fibonacci using recursion and store the result in the memoization table
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Initialize the memoization table with -1 (indicating that values are not computed yet)
    memo.resize(n + 1, -1);

    long long result = fibonacci(n);

    std::cout << "Fibonacci(" << n << ") = " << result << std::endl;

    return 0;
}
