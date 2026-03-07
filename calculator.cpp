#include <iostream>
using namespace std;

int main() {
    int choice;
    double num, result;
    char cont = 'y';

    cout << "===== Unlimited Calculator =====" << endl;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Choose operation: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> result;

    while(cont == 'y' || cont == 'Y') {
        cout << "Enter next number: ";
        cin >> num;

        switch(choice) {
            case 1:
                result += num;
                break;
            case 2:
                result -= num;
                break;
            case 3:
                result *= num;
                break;
            case 4:
                if(num != 0)
                    result /= num;
                else {
                    cout << "Error: Division by zero!" << endl;
                    return 0;
                }
                break;
            default:
                cout << "Invalid choice!" << endl;
                return 0;
        }

        cout << "Continue? (y/n): ";
        cin >> cont;
    }

    cout << "Final Result = " << result << endl;

    return 0;
}