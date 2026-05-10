#include<iostream>
#include<fstream>
using namespace std;

int main() {

    ofstream fout("notes.txt");

    fout << "This is line 1." << endl;
    fout << "This is line 2." << endl;
    fout << "This is line 3." << endl;

    fout.close();

    ifstream inFile("notes.txt");

    string line;
    while(getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    ofstream appendFile("notes.txt", ios::app);

    appendFile << "Name: Ali" << endl;
    appendFile << "Roll Number: 23-CS-101" << endl;

    appendFile.close();

    cout << "Name and roll number appended successfully." << endl;

    return 0;
}
