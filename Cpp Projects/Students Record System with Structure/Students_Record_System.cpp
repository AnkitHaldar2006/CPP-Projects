#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks[3];
    float average;
    char grade;
};

void input(Student &s) {
    cout << "Enter Roll No: ";
    cin >> s.roll;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter marks in 3 subjects: ";
    for (int i = 0; i < 3; ++i)
        cin >> s.marks[i];
}

void calculate(Student &s) {
    float sum = 0;
    for (int i = 0; i < 3; ++i)
        sum += s.marks[i];
    s.average = sum / 3;

    if (s.average >= 90) s.grade = 'A';
    else if (s.average >= 75) s.grade = 'B';
    else if (s.average >= 60) s.grade = 'C';
    else s.grade = 'D';
}

void display(const Student &s) {
    cout << "\nRoll No: " << s.roll
         << "\nName: " << s.name
         << "\nAverage Marks: " << s.average
         << "\nGrade: " << s.grade << "\n";
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student *list = new Student[n];
    for (int i = 0; i < n; ++i) {
        cout << "\n    Enter details for Student " << i + 1 << "    \n";
        input(list[i]);
        calculate(list[i]);
    }

    cout << "\n    Student Records    \n";
    for (int i = 0; i < n; ++i)
        display(list[i]);

    delete[] list;
    return 0;
}
