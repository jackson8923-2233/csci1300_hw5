#include <iostream>
using namespace std;

// Function that simulates daily deposits until the Vault goal is reached
int daysToFund(int startBalance, int dailyDeposit)
{
    int balance = startBalance;
    int days = 0;
    int goal = 42500;

    while (balance < goal)
    {
        balance += dailyDeposit;
        days++;
        cout << "Day " << days << ": deposited " << dailyDeposit << ", balance now " << balance << endl;
    }

    return days;
}

int main()
{
    int startBalance, dailyDeposit;

    cout << "Enter the starting Vault balance: ";
    cin >> startBalance;

    cout << "Enter the daily deposit amount: ";
    cin >> dailyDeposit;

    cout << "--- Vault Savings Plan ---" << endl;

    int days = daysToFund(startBalance, dailyDeposit);

    cout << "The Vault was funded in " << days << " days!" << endl;

    return 0;
}