#include<iostream>
#include<fstream>
using namespace std;

int main() {

    ifstream sourceFile("notes.txt");

    ofstream destinationFile("copy.txt");
    string line;
    while(getline(sourceFile, line)) {
        destinationFile << line << endl;
    }

    cout << "File content copied successfully." << endl;

    sourceFile.close();
    destinationFile.close();

    return 0;
}
