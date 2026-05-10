#include <iostream>
using namespace std;

class Vehicle{
	protected:
		string name;
	public:
	Vehicle(string n){
		name=n;
		cout << "This is vehicle class's constructor. Name of car is " << name << endl;
	}
};

class Car: public Vehicle {
	protected:
		double topSpeed;
	public:
		Car(string n, double s) : Vehicle( n ){
			topSpeed=s;
			cout << "This is Car class's constructor. Top speed is " << topSpeed << endl;
		}
};

class ElectricCar: public Car {
	private:
		float batteryCapacity;
	public:
		ElectricCar( string n , double s, float b): Car( n , s){
			batteryCapacity=b;
			cout << "This is Electric Car class's constructor. Battery Capacity is " << batteryCapacity << endl;
		}
};

int main(){
	ElectricCar e1("Mercedes" , 180 , 95 );
	
	return 0;
}
