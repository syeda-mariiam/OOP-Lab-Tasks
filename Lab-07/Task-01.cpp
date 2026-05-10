#include<iostream>
using namespace std;

class Calculator{
	public:
		double add ( double a , double b){
			return a+b;
		}
		
		double multipy (double a , double b){
			return a*b;
		}
};

class Student{
	Calculator* c1;
	public:
		Student(Calculator* c){
			c1 = c;
		}
		
		void displayAddition( double a , double b){
			if (c1){
				cout << "The addition of two numbers is " << c1->add( a , b ) << endl;
			}
		}
		
		void displayMultiplication ( double a , double b ){
			if ( c1 ) {
				cout << "The multiplication of two numbers is " << c1->multipy ( a , b ) << endl;
			}
		}
}; 


int main(){
	Calculator mycalc;
	Student s1 (&mycalc);
	Student s2 (&mycalc);
	
	cout << "Student 1"<< endl;
	s1.displayAddition(2,3);
	s1.displayMultiplication(2,3);
	
	cout << "Student 2" << endl;
	s2.displayAddition(2,5);
	s2.displayMultiplication(2,5);
	
	return 0;
}
