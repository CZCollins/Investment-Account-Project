#include "InvestmentAccount.h"
#include <iomanip>  
#include <iostream>
#include <string>

/*
Implementation of the InvestmentAccount class.
This file includes the definitions of the methods declared in the header file.
It contains methods to calculate and display the balance and interest for an
investment over a number of years, both with and without additional monthly deposits.
 
Author: Chris Collins
Date Created: 08Jun24
*/

using namespace std;

// Constructor
InvestmentAccount::InvestmentAccount(double t_initial_investment, double t_monthly_deposit, double t_annual_interest_rate, int t_number_of_years)
    : m_initial_investment(t_initial_investment), m_monthly_deposit(t_monthly_deposit), m_annual_interest_rate(t_annual_interest_rate), m_number_of_years(t_number_of_years) {}

// Method to calculate balance and interest without monthly deposits
void InvestmentAccount::calculateWithoutMonthlyDeposits() const {
    double balance = m_initial_investment;
    cout << "\nBalance and Interest Without Additional Monthly Deposits" << endl;
    cout << string(70, '=') << endl;
    cout << left << setw(6) << "Year" << setw(26) << "Year End Balance" << setw(26) << "Year End Earned Interest" << endl;
    cout << string(70, '-') << endl;
    for (int year = 1; year <= m_number_of_years; ++year) {
        double interest = balance * (m_annual_interest_rate / 100);
        balance += interest;
        cout << left << setw(6) << year
             << left << "$" << setw(31) << fixed << setprecision(2) << balance
             << "$" << setw(31) << fixed << setprecision(2) << interest << endl;
    }
    cout << endl;
}

// Method to calculate balance and interest with monthly deposits
void InvestmentAccount::calculateWithMonthlyDeposits() const {
    double balance = m_initial_investment;
    cout << "\nBalance and Interest With Additional Monthly Deposits" << endl;
    cout << string(70, '=') << endl;
    cout << left << setw(6) << "Year" << setw(26) << "Year End Balance" << setw(26) << "Year End Earned Interest" << endl;
    cout << string(70, '-') << endl;
    for (int year = 1; year <= m_number_of_years; ++year) {
        double yearly_interest = 0;
        for (int month = 1; month <= 12; ++month) {
            double interest = (balance + m_monthly_deposit) * (m_annual_interest_rate / 100) / 12;
            balance += m_monthly_deposit + interest;
            yearly_interest += interest;
        }
        cout << left << setw(6) << year
             << left << "$" << setw(31) << fixed << setprecision(2) << balance
             << "$" << setw(31) << fixed << setprecision(2) << yearly_interest << endl;
    }
    cout << endl;
}

