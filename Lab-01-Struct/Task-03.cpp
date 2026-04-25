#include <iostream>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNo;
    double marks;

    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];  

    for(int i = 0; i < n; i++) {
        Student* ptr = &students[i];  // pointer to each structure

        cout << "\nEnter details for Student " << i + 1 << endl;

        cout << "First Name: ";
        cin >> ptr->firstName;

        cout << "Last Name: ";
        cin >> ptr->lastName;

        cout << "Roll Number: ";
        cin >> ptr->rollNo;

        cout << "Marks: ";
        cin >> ptr->marks;
    }

    cout << "\nStudents' Information\n";

    for(int i = 0; i < n; i++) {
        Student* ptr = &students[i];

        ptr->displayStudentInfo();
    }

    delete[] students;

    return 0;
}
