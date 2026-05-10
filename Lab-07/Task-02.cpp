#include<iostream>
using namespace std;

class Display{
	double lastValue;
	
	public:
		Display(){
			lastValue=0.0;
		}
		
		void show( double value){
			lastValue = value;
			cout << "Result is " << lastValue << endl;
		}
		
		double getLastValue () const {
		 return lastValue;
		 }
};

class Calculator{
	Display display;
	public:
	
		
		void add ( double a , double b ) {
			double result= a+b;
			display.show(result);
		}
		
	   	void multiply ( double a , double b ) {
			double result= a*b;
			display.show(result);
		}	
		
		
		void showPreviousResult ( ) const {
		cout << "Previous Result:" << display.getLastValue() << endl;
		}
};


int main(){
	Calculator c1;
	c1.add(33.5 , 77.5);
	c1.multiply(44 , 8);
	c1.showPreviousResult();
	
	return 0;
}
