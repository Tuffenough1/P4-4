#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Variables to store money received and cost of the item
    double cost, amountReceived;

    // Prompt user for cost of the item
    cout << "Enter the cost of the item: $";
    cin >> cost;

    // Prompt user for the amount received
    cout << "Enter the amount received: $";
    cin >> amountReceived;

    // Calculate change
    double change = amountReceived - cost;

    // Check if there is enough money
    if (change < 0) {
        cout << "Insufficient amount received. Please provide more money." << endl;
    }
    else if (change == 0) {
        cout << "No change to return." << endl;
    }
    else {
        // Convert change to cents, rounding by adding 0.5 before casting
        int totalChange = static_cast<int>((change * 100) + 0.5);

        // Initialize denomination variables
        int dollars = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;

        // Calculate dollars
        if (totalChange >= 100) {
            dollars = totalChange / 100;
            totalChange %= 100;
        }

        // Calculate quarters
        if (totalChange >= 25) {
            quarters = totalChange / 25;
            totalChange %= 25;
        }

        // Calculate dimes
        if (totalChange >= 10) {
            dimes = totalChange / 10;
            totalChange %= 10;
        }

        // Calculate nickels
        if (totalChange >= 5) {
            nickels = totalChange / 5;
            totalChange %= 5;
        }

        // Remaining amount is in pennies
        pennies = totalChange;

        // Output the change breakdown
        cout << "Change to return: $" << fixed << setprecision(2) << change << endl;
        cout << "Breakdown:" << endl;

        if (dollars > 0) {
            cout << "$" << dollars << " (Dollars)" << endl;
        }
        if (quarters > 0) {
            cout << quarters << " (Quarters)" << endl;
        }
        if (dimes > 0) {
            cout << dimes << " (Dimes)" << endl;
        }
        if (nickels > 0) {
            cout << nickels << " (Nickels)" << endl;
        }
        if (pennies > 0) {
            cout << pennies << " (Pennies)" << endl;
        }
    }

    return 0;
}
