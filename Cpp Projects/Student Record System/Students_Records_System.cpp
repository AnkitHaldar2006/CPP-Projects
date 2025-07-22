#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;

struct Student {
    int roll;
    char name[50];
    float marks;
};

Student records[MAX];
int count = 0;

// Function declarations
void addStudent();
void displayStudents();
void searchStudent(int roll);
void deleteStudent(int roll);

int main() {
    int choice, roll;

    do {
        cout << "\n--- Student Record System ---\n";
        cout << "1. Add Student\n2. Display All\n3. Search by Roll\n4. Delete Student\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3:
                cout << "Enter roll number to search: ";
                cin >> roll;
                searchStudent(roll);
                break;
            case 4:
                cout << "Enter roll number to delete: ";
                cin >> roll;
                deleteStudent(roll);
                break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 0);

    return 0;
}

// Function definitions
void addStudent() {
    if(count >= MAX) {
        cout << "Record limit reached!\n";
        return;
    }
    cout << "Enter roll number: ";
    cin >> records[count].roll;
    cout << "Enter name: ";
    cin.ignore();
    cin.getline(records[count].name, 50);
    cout << "Enter marks: ";
    cin >> records[count].marks;
    count++;
    cout << "Student added!\n";
}

void displayStudents() {
    cout << "\n--- All Students ---\n";
    for(int i = 0; i < count; i++) {
        cout << "Roll: " << records[i].roll
             << ", Name: " << records[i].name
             << ", Marks: " << records[i].marks << endl;
    }
}

void searchStudent(int roll) {
    for(int i = 0; i < count; i++) {
        if(records[i].roll == roll) {
            cout << "Found: " << records[i].name << " with marks " << records[i].marks << endl;
            return;
        }
    }
    cout << "Student not found.\n";
}

void deleteStudent(int roll) {
    for(int i = 0; i < count; i++) {
        if(records[i].roll == roll) {
            for(int j = i; j < count - 1; j++) {
                records[j] = records[j + 1];
            }
            count--;
            cout << "Student deleted.\n";
            return;
        }
    }
    cout << "Student not found.\n";
}
