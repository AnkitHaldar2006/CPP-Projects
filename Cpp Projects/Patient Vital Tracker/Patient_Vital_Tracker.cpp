#include <iostream>
using namespace std;

struct Patient {
    int id;
    char name[50];
    union {
        float temperature;
        int heartRate;
    } vitals;
    bool isTemp; // true if temperature is stored, false if heart rate
};

void input(Patient &p) {
    cout << "Enter Patient ID: ";
    cin >> p.id;
    cout << "Enter Name: ";
    cin.ignore();
    cin.getline(p.name, 50);
    cout << "Store Temperature (1) or Heart Rate (0)? ";
    cin >> p.isTemp;
    if (p.isTemp) {
        cout << "Enter Temperature: ";
        cin >> p.vitals.temperature;
    } else {
        cout << "Enter Heart Rate: ";
        cin >> p.vitals.heartRate;
    }
}

void display(const Patient &p) {
    cout << "ID: " << p.id << ", Name: " << p.name << ", ";
    if (p.isTemp)
        cout << "Temperature: " << p.vitals.temperature << "°C\n";
    else
        cout << "Heart Rate: " << p.vitals.heartRate << " bpm\n";
}

int main() {
    int n;
    cout << "Enter number of patients: ";
    cin >> n;
    Patient patients[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nPatient " << i + 1 << ":\n";
        input(patients[i]);
    }

    cout << "\n--- Patient Vitals ---\n";
    for (int i = 0; i < n; ++i) {
        display(patients[i]);
    }

    return 0;
}
