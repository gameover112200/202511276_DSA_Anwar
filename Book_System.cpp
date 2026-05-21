#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFile(string filename) {
    ifstream file(filename);
    string line;
    
    if (file.is_open()) {
        cout << "\n----------------------------------------\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        cout << "----------------------------------------\n";
        file.close();
    } else {
        cout << "Error: File " << filename << " not found!" << endl;
    }
}

void historySection() {
    int choice;
    do {
        cout << "\n=== History of C++ ===" << endl;
        cout << "1. Origin of C++" << endl;
        cout << "2. Development of C++" << endl;
        cout << "3. Evolution of C++" << endl;
        cout << "4. Back to Main Menu" << endl;
        cout << "Choose: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                readFile("origin.txt");
                break;
            case 2:
                readFile("development.txt");
                break;
            case 3:
                readFile("evolution.txt");
                break;
            case 4:
                return;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice!= 4);
}

void conceptsSection() {
    int choice;
    do {
        cout << "\n=== Learn about C++ Concepts ===" << endl;
        cout << "1. Data Types" << endl;
        cout << "2. Control Flow" << endl;
        cout << "3. Loops" << endl;
        cout << "4. Arrays" << endl;
        cout << "5. File Streams" << endl;
        cout << "6. Back to Main Menu" << endl;
        cout << "Choose: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                readFile("datatypes.txt");
                break;
            case 2:
                readFile("controlflow.txt");
                break;
            case 3:
                readFile("loops.txt");
                break;
            case 4:
                readFile("arrays.txt");
                break;
            case 5:
                readFile("filestreams.txt");
                break;
            case 6:
                return;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice!= 6);
}

int main() {
    int mainChoice;
    
    cout << "===================================" << endl;
    cout << " Foundations and History of C++" << endl;
    cout << "===================================" << endl;
    
    do {
        cout << "\nMain Menu:" << endl;
        cout << "1. History of C++" << endl;
        cout << "2. Learn about C++ Concepts" << endl;
        cout << "3. Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> mainChoice;
        
        switch (mainChoice) {
            case 1:
                historySection();
                break;
            case 2:
                conceptsSection();
                break;
            case 3:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. Try again." << endl;
        }
    } while (mainChoice!= 3);
    
    return 0;
}