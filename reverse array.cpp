#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;               
    int arr[n];

    cout << "Enter exercise time for each day (in minutes): ";
    // Input exercise times
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nExercise times in reverse order: ";
    // Print in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i];
        if (i > 0) cout << " "; 
    }

    return 0;
}

