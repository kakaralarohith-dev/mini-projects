#include <iostream>
using namespace std;

template <typename T>
T safeDivide(T a, T b) {
    if (b == 0) {
        throw 1;  // simple exception
    }
    return a / b;
}
template <typename T>
T safeAdd(T a, T b) {
    return a + b;
}

int main() {
    double results[100];
    int count = 0;
    int choice;
    double x, y, result;

    do {
        cout << "\n--- Safe Data Processor Utility ---\n";
        cout << "1. Addition\n";
        cout << "2. Division\n";
        cout << "3. View Stored Results\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        try {
            switch (choice) {
                case 1:
                    cout << "Enter two numbers: ";
                    cin >> x >> y;
                    result = safeAdd(x, y);

                    if (count < 100) {
                        results[count++] = result;
                    }

                    cout << "Result: " << result << endl;
                    break;

                case 2:
                    cout << "Enter two numbers: ";
                    cin >> x >> y;
                    result = safeDivide(x, y); // may throw

                    if (count < 100) {
                        results[count++] = result;
                    }

                    cout << "Result: " << result << endl;
                    break;

                case 3:
                    cout << "\nStored Results:\n";
                    if (count == 0) {
                        cout << "No results stored.\n";
                    } else {
                        for (int i = 0; i < count; i++) {
                            cout << results[i] << endl;
                        }
                    }
                    break;

                case 4:
                    cout << "Exiting...\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
            }
        }
        catch (int e) {
            cout << "Error: Division by zero!" << endl;
        }

    } while (choice != 4);

    return 0;
}
