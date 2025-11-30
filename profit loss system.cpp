#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int *records = new int[n];   

    int totalProfit = 0, totalLoss = 0;

    cout << "Enter profit/loss for each day: ";
    for (int i = 0; i < n; i++) {
        cin >> records[i];
        if (records[i] > 0)
            totalProfit += records[i];
        else
            totalLoss += (-records[i]);
    }

    int netBalance = totalProfit - totalLoss;

    cout << "\n--- Weekly Summary ---" << endl;
    cout << "Total Profit: " << totalProfit << endl;
    cout << "Total Loss: " << totalLoss << endl;
    cout << "Net Balance: " << netBalance << endl;

    delete[] records;  // free memory
    return 0;
}
