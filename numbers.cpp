#include <iostream>

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);  // Recursive call
        std::cout << n << " "; // Print the current number
    }
}

int main() {
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    if (n > 0) {
        printNumbers(n);
        std::cout << std::endl;
    } else {
        std::cout << "Please enter a positive integer." << std::endl;
    }

    return 0;
}