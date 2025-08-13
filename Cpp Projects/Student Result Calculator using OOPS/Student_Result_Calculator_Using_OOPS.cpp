#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int classNum;
    int marks[5];
    int total;
    float average;
    char grade;

public:
    // Method to input student details
    void inputDetails()
    {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter student class: ";
        cin >> classNum;

        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    // Method to calculate total, average, and grade
    void calculateResults()
    {
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        average = total / 5.0;

        if (average > 80)
            grade = 'A';
        else if (average >= 50)
            grade = 'B';
        else if (average >= 30)
            grade = 'C';
        else
            grade = 'D';
    }

    // Method to display the report
    void displayReport()
    {
        cout << "\n--- Student Report ---\n";
        cout << "Name   : " << name << endl;
        cout << "Class  : " << classNum << endl;
        cout << "Total  : " << total << endl;
        cout << "Average: " << average << endl;
        cout << "Grade  : " << grade << endl;
    }
};

int main()
{
    Student s;

    cin.ignore(); // Clear input buffer before getline
    s.inputDetails();
    s.calculateResults();
    s.displayReport();

    return 0;
}