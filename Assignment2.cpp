#include <iostream>

using namespace std;

float calcAverage(int x, int y, int z)
{
    float avg;
    avg = (x + y + z) / 3.0;
    return avg;
}

int main()
{
    int students;

    cout << "Student Result Management System\n";
    cout << "Enter number of students: ";
    cin >> students;

    for (int i = 1; i <= students; i++)
    {
        char studentName[30];

        int subject1;
        int subject2;
        int subject3;

        int total;
        float average;

        cout << "\nEnter student name: ";
        cin >> studentName;

        cout << "Enter mark for subject 1: ";
        cin >> subject1;

        cout << "Enter mark for subject 2: ";
        cin >> subject2;

        cout << "Enter mark for subject 3: ";
        cin >> subject3;

        total = subject1 + subject2 + subject3;

        average = calcAverage(subject1, subject2, subject3);

        cout << "\n----- Student Result -----\n";
        cout << "Name: " << studentName << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << average << endl;

        if (average >= 50)
        {
            cout << "Final Result: Passed\n";
        }
        else
        {
            cout << "Final Result: Failed\n";
        }
    }

    cout << "\nProgram Ended Successfully\n";

    return 0;
}