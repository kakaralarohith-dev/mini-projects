#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    float baseSalary;

public:
    virtual void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Base Salary: ";
        cin >> baseSalary;
    }

    virtual float calculateSalary() {
        return baseSalary;
    }

    virtual void display() {
        cout << "\nName: " << name;
        cout << "\nID: " << id;
    }
};

// Manager Class
class Manager : public Employee {
    float bonus;

public:
    void input() {
        Employee::input();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    float calculateSalary() {
        return baseSalary + bonus;
    }

    void display() {
        Employee::display();
        cout << "\nRole: Manager";
        cout << "\nTotal Salary: " << calculateSalary() << endl;
    }
};

class Developer : public Employee {
    float overtime;

public:
    void input() {
        Employee::input();
        cout << "Enter Overtime Pay: ";
        cin >> overtime;
    }

    float calculateSalary() {
        return baseSalary + overtime;
    }

    void display() {
        Employee::display();
        cout << "\nRole: Developer";
        cout << "\nTotal Salary: " << calculateSalary() << endl;
    }
};

class Intern : public Employee {
public:
    void input() {
        Employee::input();
    }

    float calculateSalary() {
        return baseSalary;
    }

    void display() {
        Employee::display();
        cout << "\nRole: Intern";
        cout << "\nTotal Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Employee* emp[50];
    int count = 0;
    int choice, type;

    do {
        cout << "\n\n===== PAYROLL SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nSelect Employee Type:";
            cout << "\n1. Manager";
            cout << "\n2. Developer";
            cout << "\n3. Intern";
            cout << "\nEnter Type: ";
            cin >> type;

            if (type == 1) {
                emp[count] = new Manager();
            } else if (type == 2) {
                emp[count] = new Developer();
            } else if (type == 3) {
                emp[count] = new Intern();
            } else {
                cout << "Invalid Type!";
                continue;
            }

            emp[count]->input();
            count++;
            break;

        case 2:
            if (count == 0) {
                cout << "\nNo Employees Added!";
            } else {
                for (int i = 0; i < count; i++) {
                    emp[i]->display();
                    cout << "\n-------------------";
                }
            }
            break;

        case 3:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid Choice!";
        }

    } while (choice != 3);

    return 0;
}
