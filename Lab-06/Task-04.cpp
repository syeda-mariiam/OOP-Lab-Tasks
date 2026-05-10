#include<iostream>
using namespace std;

class Device {
	protected:
		string deviceName;
		int deviceID;
		int * data;
		
	public:
		Device ( string n, int id , int d) {
			deviceName=n;
			deviceID=id;
			
			data=new int;
			*data = d;
			
		cout << "Device constructor called" << endl;
        cout << "Device Name: " << deviceName << endl;
        cout << "Device ID: " << deviceID << endl;
        cout << "Data: " << *data << endl;
		}
		
		virtual ~Device(){
			delete data;
			cout << "Device destructor called" << endl;
		}
};

class Sensor: public Device {
	private:
		string sensorType;
		float *sensorValue;
	public:
		Sensor(string n, int id , int d , string sType , float sValue ) : Device( n , id , d){
			sensorType= sType;
			sensorValue = new float;
			*sensorValue = sValue;
			
			cout << "Sensor Constructor called" << endl;
			cout << "Sensor Type: " << sensorType << endl;
			cout << "Sensor Value: "  << *sensorValue << endl;
		}
		
		~Sensor(){
			delete sensorValue;
			cout << "Sensor Destructor called." << endl;
		}
};

int main(){
	Sensor s1( "DeviceX" , 606 , 50 , "Temperature" , 36.5 );
	
	return 0;
}
