#include <iostream>
using namespace std;
int main() {
    int numStudents = 10;
    int grade, totalGrade = 0;
    int studentCount = 0;

    do {
        cout << "Enter the grade for student " << studentCount + 1 << ": ";
        cin >> grade;

        totalGrade += grade;
        studentCount++;
    } while (studentCount < numStudents);

    double averageGrade = static_cast<double>(totalGrade) / numStudents;
    cout << "The average exam grade for the class is: " << averageGrade << endl;

    return 0;
}