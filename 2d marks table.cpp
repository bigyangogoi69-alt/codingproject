#include <iostream>
using namespace std;

int main() {
    int marks[5][3];
    cout << "Enter marks of 5 students in 3 subjects(Maths, Physics, Computer Science):\n";

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < 3; j++) {
            cin >> marks[i][j];
        }
    }

    int maxMath = 0, maxPhy = 0, maxCS = 0;

    for (int i = 0; i < 5; i++) {
        if (marks[i][0] > maxMath) maxMath = marks[i][0];
        if (marks[i][1] > maxPhy) maxPhy = marks[i][1];
        if (marks[i][2] > maxCS) maxCS = marks[i][2];
    }

    cout << "\n Highest marks in Mathematics: " << maxMath;
    cout << "\n Highest marks in Physics: " << maxPhy;
    cout << "\n Highest marks in Computer Science: " << maxCS;

    return 0;
}
