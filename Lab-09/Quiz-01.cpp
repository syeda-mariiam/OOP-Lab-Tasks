#include<iostream>
using namespace std;

class Employee{
	public:
	    virtual double calculateSalary(){
	    	cout << " Base Employee salary calculation called " << endl;
	    	return 0;
		}
		
		virtual ~Employee (){
		}
};

class PermanentEmployee : public Employee {
		private:
		double basicSalary;
		double bonus;
		
		public:
			PermanentEmployee ( double sal , double b) {
			basicSalary=sal;
			bonus=b;
		}
		
		double calculateSalary() override{
		return basicSalary+bonus;
		}	
	
};

class ContractEmployee : public Employee {
		private:
		double hourlyRate;
		double hoursWorked;
		
		public:
			ContractEmployee( double rate , double hw){
			hourlyRate= rate;
			hoursWorked=hw;
		}
		
		double calculateSalary() override{
		return hourlyRate*hoursWorked;
		}	
	
};


int main(){
	Employee* e1 = new PermanentEmployee ( 40000 , 5000 ) ;
	Employee* e2 = new ContractEmployee ( 800 , 30 ) ;
	
	cout << "Permanent Employee's Salary is:  " << e1->calculateSalary() << endl;
	cout << "Contract Employee's Salary is: " << e2->calculateSalary() << endl;
	
	delete e1;
	delete e2;
	
	return 0;
	
}
