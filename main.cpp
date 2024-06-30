#include <iostream>
#include "InvestmentAccount.h"

/*
Main function to interact with the user, gather input, and display the
investment growth calculations using the InvestmentAccount class.
It prompts the user for initial investment amount, monthly deposit,
annual interest rate, and number of years. It then creates an instance
of InvestmentAccount and calls the methods to calculate and display
the balance and interest with and without additional monthly deposits.
 
Author: Chris Collins
Date Created: 08Jun24
*/

using namespace std;

// Function to read double input
double read_double_input() {
    double input;
    cin >> input;
    return input;
}

// Function to read int input
int read_int_input() {
    int input;
    cin >> input;
    return input;
}

// Main function
int main() {
    // Prompt user for input values
    cout << "Enter initial investment amount: ";
    double initial_investment = read_double_input();
    cout << "Enter monthly deposit amount: ";
    double monthly_deposit = read_double_input();
    cout << "Enter annual interest rate: ";
    double annual_interest_rate = read_double_input();
    cout << "Enter number of years: ";
    int number_of_years = read_int_input();

    // Create an instance of InvestmentAccount
    InvestmentAccount account(initial_investment, monthly_deposit, annual_interest_rate, number_of_years);

    // Calculate and display balance and interest without monthly deposits
    account.calculateWithoutMonthlyDeposits();

    // Calculate and display balance and interest with monthly deposits
    account.calculateWithMonthlyDeposits();

    return 0;
}

