#ifndef INVESTMENT_ACCOUNT_H
#define INVESTMENT_ACCOUNT_H

#include <iostream>

/*
The InvestmentAccount class provides functionality to calculate and display
the year-end balance and earned interest for an investment over a specified
number of years. The calculations are performed with and without additional
monthly deposits. This class includes methods for these calculations and
getter methods for unit testing.
 
Author: Chris Collins
Date Created: 08Jun24
*/

class InvestmentAccount {
private:
    double m_initial_investment;
    double m_monthly_deposit;
    double m_annual_interest_rate;
    int m_number_of_years;

public:
    // Constructor
    InvestmentAccount(double t_initial_investment, double t_monthly_deposit, double t_annual_interest_rate, int t_number_of_years);

    // Method to calculate balance and interest without monthly deposits
    void calculateWithoutMonthlyDeposits() const;

    // Method to calculate balance and interest with monthly deposits
    void calculateWithMonthlyDeposits() const;
};

#endif // INVESTMENT_ACCOUNT_H

