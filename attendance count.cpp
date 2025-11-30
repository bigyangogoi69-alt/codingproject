#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter total number of students: ";
    cin >> n;   // Total number of students

    int attendance[n];
    int present = 0, absent = 0;

    cout << "Enter attendance record (1 for present, 0 for absent): ";
    for (int i = 0; i < n; i++) {
        cin >> attendance[i];
        if (attendance[i] == 1)
            present++;
        else
            absent++;
    }

    cout << "\n--- Attendance Summary ---" << endl;
    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;

    return 0;
}
