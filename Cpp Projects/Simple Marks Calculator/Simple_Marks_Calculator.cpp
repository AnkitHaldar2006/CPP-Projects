#include<iostream>
using namespace std;

int main() {
    int Beng_marks, Eng_marks, Math_marks, History_marks, Geography_marks, Total_marks;
    float Average_marks;

    cout << "Enter Bengali Marks: ";
    cin >> Beng_marks;

    cout << "Enter English Marks: ";
    cin >> Eng_marks;

    cout << "Enter Mathematics Marks: ";
    cin >> Math_marks;

    cout << "Enter History Marks: ";
    cin >> History_marks;

    cout << "Enter Geography Marks: ";
    cin >> Geography_marks;

    Total_marks = Beng_marks + Eng_marks + Math_marks + History_marks + Geography_marks;
    Average_marks = Total_marks / 5.0;

    cout << "\nTotal Marks: " << Total_marks << endl;
    cout << "Average Marks: " << Average_marks << endl;

    
    if (Average_marks >= 90) {
        cout << "Grade: A+\n";
    } else if (Average_marks >= 80) {
        cout << "Grade: A\n";
    } else if (Average_marks >= 70) {
        cout << "Grade: B\n";
    } else if (Average_marks >= 55) {
        cout << "Grade: C\n";
    } else {
        cout << "Grade: D\n";
    }

    return 0;
}
