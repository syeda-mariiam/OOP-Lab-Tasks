#include<iostream>
#include<fstream>
using namespace std;

int main() {

    ofstream fout("students.txt");
    fout << "Ali 101" << endl;
    fout << "Sara 102" << endl;
    fout << "Ahmed 103" << endl;
    fout.close();

    cout << "Student data written successfully.\n" << endl;

    ifstream Fin("students.txt");
    string name;
    int rollNo;
    cout << "Student Details:" << endl;
    while(Fin >> name >> rollNo) {
        cout << "Name: " << name 
             << " , Roll No: " << rollNo << endl;
    }
    Fin.close();

    return 0;
}
