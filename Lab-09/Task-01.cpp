#include<iostream>
using namespace std;

class Distance{
	private:
		double feet , inches;
    public:
    	Distance(){
		}
		
		Distance( double f1, double i1 ){
			feet=f1;
			inches=i1;
		}
		
		bool operator == ( Distance d2){
			Distance container;
			if (feet == d2.feet && inches == d2.inches) {
				return true;
			}
			else{
				return false;
 			}
			
		}
		
};

int main() {

    Distance d1(5, 8);
    Distance d2(3, 8);

    if (d1 == d2) {
        cout << "Distances are equal" << endl;
    }
    else {
        cout << "Distances are not equal" << endl;
    }

    return 0;
}

