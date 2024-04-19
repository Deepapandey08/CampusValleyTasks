#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

bool isPalindrome(int n) {
    int temp = n, reversed = 0;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    return n == reversed;
}

bool isArmstrong(int n) {
    int numDigits = log10(n) + 1;
    int temp = n, sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    return n == sum;
}

int main() {
    int choice, num;
    
    while (true) {
        cout << "Press 1 to calculate the factorial of a number" << endl;
        cout << "Press 2 to check whether the given number is prime or not" << endl;
        cout << "Press 3 to check palindrome or not" << endl;
        cout << "Press 4 to check Armstrong or not" << endl;
        cout << "Press 5 to exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> num;
                // Calculate factorial of num
                break;
            case 2:
                cout << "Enter a number: ";
                cin >> num;
                cout << (isPrime(num) ? "Prime" : "Not Prime") << endl;
                break;
            case 3:
                cout << "Enter a number: ";
                cin >> num;
                cout << (isPalindrome(num) ? "Palindrome" : "Not Palindrome") << endl;
                break;
            case 4:
                cout << "Enter a number: ";
                cin >> num;
                cout << (isArmstrong(num) ? "Armstrong" : "Not Armstrong") << endl;
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

    return 0;
}
