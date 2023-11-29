#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

// Function to find rectangle dimensions
void findRectangleDimensions(int area) {
    for (int length = 1; length <= std::sqrt(area); ++length) {
        if (area % length == 0) {
            int width = area / length;
            std::cout << "Rectangle dimensions: " << length << " x " << width << std::endl;
        }
    }
}

// Function to solve the equation x^2 + y^2 = k^2
void solveEquation() {
    const int kMax = 30;

    for (int x = 1; x <= kMax; ++x) {
        for (int y = 1; y <= kMax; ++y) {
            int kSquare = x * x + y * y;
            int k = std::sqrt(kSquare);

            if (k <= kMax && k * k == kSquare) {
                std::cout << "x = " << x << ", y = " << y << ", k = " << k << std::endl;
            }
        }
    }
}

int main() {
    int choice;
    std::cout << "Choose a task (1, 2, or 3): ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        int num;
        std::cout << "Enter a number: ";
        std::cin >> num;
        if (isPalindrome(num)) {
            std::cout << "The number is a palindrome." << std::endl;
        }
        else {
            std::cout << "The number is not a palindrome." << std::endl;
        }
        break;
    case 2:
        int area;
        std::cout << "Enter the rectangle area: ";
        std::cin >> area;
        findRectangleDimensions(area);
        break;
    case 3:
        solveEquation();
        break;
    default:
        std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}
