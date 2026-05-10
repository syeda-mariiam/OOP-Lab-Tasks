#include<iostream>
using namespace std;

class Shape{
	public:
	virtual double area(){
		return 0;
	};
	
	virtual ~Shape (){
	}
	
};

class Rectangle : public Shape{
	    double length;
	    double width;
	public:
		Rectangle( double l , double w){
			length =l;
			width =w;
		}
		double area() override {
			return length*width;
		}
	
};

class Circle : public Shape {
	double radius;
	public:
		Circle (double r){
			radius = r;
		}
		double area() override {
			return 3.14* radius * radius;
			
		}
};


int main(){
	Shape* s1 = new Rectangle ( 33.3 , 57 );
	Shape* s2 = new Circle ( 66.5 );
	
	cout << " Reactangle area: " << s1->area() << endl;
	cout << " Circle area: " << s2->area() << endl;
	
	delete s1;
	delete s2;
	
	return 0;
}
