#include <iostream>
using namespace std;

struct Student {
	string firstName;
	string lastName;
	int rollNo;
	double marks;
	
	void displayStudentInfo(Student student){
		cout << "Name:" << student.firstName << " " << student.lastName << endl;
		cout << "Marks:" << student.marks << endl;
	}
};

int main(){
	Student s1;
	s1.firstName= "Mariam";
	s1.lastName="Gillani";
	s1.rollNo=01;
	s1.marks=98;
	s1.displayStudentInfo(s1);
	return 0;
}
