#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    float y;

    // Formatted input
    cin >> x >> y;

    // Formatted output using cout
    cout << "Formatted output using cout: " << x << endl;

    // Using width() and precision()
    cout.width(10);
    cout.precision(3);
    cout << "Using width() and precision():" << y << endl;

    // Using manipulators
    cout << "Using manipulators:" << setw(10) << setprecision(4) << y;

    return 0;
}
