#include<iostream>
using namespace std;

class student {
private:
    string name;
    string stream;
    string DOB;
    string nation;
    double cgpa;         
    long long rollNumber;
    int batch;
    double GRno;

public:
    student() {
        name = "Not done";
        stream = "Not done";
        DOB = "Not Assigned";
        nation = "Not Assigned";
        cgpa = 0.0;
        rollNumber = 0;
        batch = 0;
        GRno = 0;
    }

    void readStudentInfo() {
        cout << "\nEnter Name: ";
        getline(cin >> ws, name);

        cout << "Enter Stream: ";
        getline(cin >> ws, stream);

        cout << "Enter DOB: ";
        getline(cin >> ws, DOB);

        cout << "Enter Batch: ";
        cin >> batch;

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter GR No: ";
        cin >> GRno;

        cout << "Enter Nation: ";
        getline(cin >> ws, nation);

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void displayStudentInfo() {
        cout << "\n---------------------------";
        cout << "\nName: " << name;
        cout << "\nStream: " << stream;
        cout << "\nDOB: " << DOB;
        cout << "\nBatch: " << batch;
        cout << "\nRoll Number: " << rollNumber;
        cout << "\nGR No: " << GRno;
        cout << "\nNation: " << nation;
        cout << "\nCGPA: " << cgpa;
        cout << "\n---------------------------\n";
    }
};

int main() {

    student s[100];
    int choice;
    int totalstudents = 0;

    do {
        cout << "\n\n===== STUDENT PROFILE MANAGER =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            if(totalstudents < 100) {
                s[totalstudents].readStudentInfo();
                totalstudents++;
            } else {
                cout << "Limit Reached!";
            }
            break;

        case 2:
            if(totalstudents == 0) {
                cout << "No students added!";
            } else {
                for(int i = 0; i < totalstudents; i++) {
                    s[i].displayStudentInfo();
                }
            }
            break;

        case 3:
            cout << "Closing Program...";
            break;

        default:
            cout << "Invalid Choice!";
        }

    } while(choice != 3);

    return 0;
}
