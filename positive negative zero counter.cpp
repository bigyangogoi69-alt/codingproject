#include <iostream>
using namespace std;

int main() {
    int n, x, pos = 0, neg = 0, zero = 0;

    cout << "Enter number of readings: ";
    cin >> n;

    cout << "Enter the readings: "<<endl;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x > 0) pos++;
        else if(x < 0) neg++;
        else zero++;
    }

    cout << "Positive = " << pos << endl;
    cout << "Negative = " << neg << endl;
    cout << "Zero = " << zero;

    return 0;
}
