#include <iostream>
using namespace std;

int main() {
    int A[10][7], student[10] = {0}, day[7] = {0};
    int max = -1, sMax = 1, min = 100, dMin = 1;

    cout << "Enter attendance for 10 students (1 = Present, 0 = Absent):\n\n";
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < 7; j++) {
            cin >> A[i][j];
            student[i] += A[i][j];   // total per student
            day[j] += A[i][j];       // total per day
        }
    }

    cout << "\nWeekly Attendance Summary\n";
    cout << "-------------------------\n\n";

    cout << "Total Present Days:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << student[i] << " days" << endl;
        if (student[i] > max) { max = student[i]; sMax = i + 1; }
    }

    for (int j = 0; j < 7; j++) {
        if (day[j] < min) { min = day[j]; dMin = j + 1; }
    }

    cout << "\nStudent with Highest Attendance: Student " << sMax << " (" << max << " Days)\n";
    cout << "Day with Lowest Overall Attendance: Day " << dMin << endl;

    return 0;
}
