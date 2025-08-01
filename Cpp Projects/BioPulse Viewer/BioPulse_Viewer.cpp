#include <iostream>
using namespace std;

typedef union {
    int age;
    float heartRate;
    double temperature;
    char note[50];
} VitalData;

typedef struct {
    int patientID;
    int vitalType;
    VitalData data;
} BioRecord;

const int MAX_RECORDS = 100;
BioRecord records[MAX_RECORDS];
int recordCount = 0;

bool isDuplicateID(int id) {
    for (int i = 0; i < recordCount; i++) {
        if (records[i].patientID == id)
            return true;
    }
    return false;
}

void addRecord() {
    if (recordCount >= MAX_RECORDS) {
        cout << "Record limit reached.\n";
        return;
    }

    BioRecord temp;
    cout << "\nEnter Patient ID: ";
    cin >> temp.patientID;

    if (isDuplicateID(temp.patientID)) {
        cout << " Patient ID already exists. Use a unique ID.\n";
        return;
    }

    cout << "Select Vital Type:\n";
    cout << "0. Age\n1. Heart Rate\n2. Temperature\n3. Health Note\n";
    cin >> temp.vitalType;

    switch (temp.vitalType) {
        case 0:
            cout << "Enter Age: ";
            cin >> temp.data.age;
            break;
        case 1:
            cout << "Enter Heart Rate (BPM): ";
            cin >> temp.data.heartRate;
            break;
        case 2:
            cout << "Enter Temperature (°F): ";
            cin >> temp.data.temperature;
            break;
        case 3:
            cout << "Enter Note: ";
            cin.ignore();
            cin.getline(temp.data.note, 50);
            break;
        default:
            cout << "Invalid Vital Type. Record cancelled.\n";
            return;
    }

    records[recordCount++] = temp;
    cout << "? Record added successfully.\n";
}

void viewAllRecords() {
    if (recordCount == 0) {
        cout << "No records to display.\n";
        return;
    }

    cout << "\n All Patient Records:\n";
    for (int i = 0; i < recordCount; i++) {
        cout << "\n Patient ID: " << records[i].patientID;
        cout << "\n Vital Type: ";
        switch (records[i].vitalType) {
            case 0:
                cout << "Age\n Value: " << records[i].data.age << " years";
                break;
            case 1:
                cout << "Heart Rate\n Value: " << records[i].data.heartRate << " BPM";
                break;
            case 2:
                cout << "Temperature\n Value: " << records[i].data.temperature << " °F";
                break;
            case 3:
                cout << "Note\n Value: " << records[i].data.note;
                break;
            default:
                cout << "Unknown";
        }
        cout << "\n-----------------------------";
    }
}

void searchByID() {
    int id;
    cout << "\nEnter Patient ID to search: ";
    cin >> id;

    bool found = false;
    for (int i = 0; i < recordCount; i++) {
        if (records[i].patientID == id) {
            found = true;
            cout << "\n Patient ID: " << records[i].patientID;
            cout << "\n Vital Type: ";
            switch (records[i].vitalType) {
                case 0:
                    cout << "Age\n Value: " << records[i].data.age << " years";
                    break;
                case 1:
                    cout << "Heart Rate\n Value: " << records[i].data.heartRate << " BPM";
                    break;
                case 2:
                    cout << "Temperature\n Value: " << records[i].data.temperature << " °F";
                    break;
                case 3:
                    cout << "Note\n Value: " << records[i].data.note;
                    break;
                default:
                    cout << "Unknown";
            }
            cout << "\n-----------------------------";
            break;
        }
    }

    if (!found)
        cout <<  "No record found with ID " << id << ".\n";
}

void showMemorySize() {
    cout << "\nMemory Footprint:";
    cout << "\nSize of VitalData (union): " << sizeof(VitalData) << " bytes";
    cout << "\nSize of BioRecord (struct): " << sizeof(BioRecord) << " bytes\n";
}

int main() {
    int choice;
    do {
        cout << "\n=====BioFlex Viewer Menu =====\n";
        cout << "1. Add Patient Record\n";
        cout << "2. View All Records\n";
        cout << "3. Search by ID\n";
        cout << "4. Show Memory Footprint\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addRecord(); break;
            case 2: viewAllRecords(); break;
            case 3: searchByID(); break;
            case 4: showMemorySize(); break;
            case 5: cout << "Exiting BioFlex Viewer. Stay healthy!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

