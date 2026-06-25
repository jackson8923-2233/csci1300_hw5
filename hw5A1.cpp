#include <iostream>
using namespace std;

// Function that takes the donations array and its size, returns the total
int totalGold(int donations[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += donations[i];
    }
    return sum;
}

int main()
{
    int count;
    cout << "Enter the number of gold donations: ";
    cin >> count;

    int donations[100];
    for (int i = 0; i < count; i++)
    {
        cout << "Enter gold donation " << (i + 1) << ": ";
        cin >> donations[i];
    }

    int total = totalGold(donations, count);
    int goal = 42500;

    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " << total << endl;
    cout << "Vault goal: " << goal << endl;

    if (total >= goal)
    {
        cout << "The Vault is fully funded! Surplus: " << (total - goal) << " gold" << endl;
    }
    else
    {
        cout << "The Vault still needs " << (goal - total) << " more gold." << endl;
    }

    return 0;
}
