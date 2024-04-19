#include <iostream>
using namespace std;

int main() {
    double dividend, divisor;

    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    try {
        if (divisor == 0) {
            throw "Division by zero error";
        }

        double quotient = dividend / divisor;
        cout << "Quotient = " << quotient << endl;
    } catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }

    return 0;
}
