#include <iostream>
#include <iomanip> // For controlling output formatting

int main() {
    // Variables to store principal, rate, and time
    double principal, rate, time;

    // Input values
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the rate of interest (%): ";
    std::cin >> rate;

    std::cout << "Enter the time period (in years): ";
    std::cin >> time;

    // Calculate simple interest
    double simpleInterest = (principal * rate * time) / 100;

    // Calculate total amount
    double totalAmount = principal + simpleInterest;

    // Display results
    std::cout << std::fixed << std::setprecision(2); // Format output to 2 decimal places
    std::cout << "\nCalculated Simple Interest: " << simpleInterest << std::endl;
    std::cout << "Total Amount after Interest: " << totalAmount << std::endl;

    return 0;
}
