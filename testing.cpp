
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price[5][4];
    double total[5];
    double grandTotal = 0;

    cout << "Enter four item price for each buyer\n";

    // Input prices
    for (int b = 0; b < 5; b++) {
        cout << "Buyer #" << b + 1 << endl;
        total[b] = 0;

        for (int i = 0; i < 4; i++) {
            cin >> price[b][i];
            total[b] += price[b][i];
        }

        grandTotal += total[b];
    }

    cout << "\n";
    cout << left << setw(10) << "Buyer"
         << setw(40) << "Item Price"
         << right << setw(12) << "Total Price" << endl;

    // Print rows
    for (int b = 0; b < 5; b++) {
        cout << left << setw(10) << ("Buyer #" + to_string(b + 1));

        for (int i = 0; i < 4; i++) {
            cout << right << setw(10) << fixed << setprecision(2) << price[b][i];
        }

        cout << right << setw(12) << total[b] << endl;
    }

    cout << left << setw(10) << ""
         << right << setw(30) << "Total "
         << setw(12) << grandTotal << endl;

    return 0;
}
