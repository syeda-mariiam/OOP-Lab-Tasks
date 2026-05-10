# include<iostream>
using namespace std;

class File {
	public:
		File(){
			cout << "File Opened" << endl;
		}
		
		~File(){
			cout << "File Closed" << endl;
		}
};

class TextFile : public File {
	public:
			TextFile(){
			cout << "Text File Opened" << endl;
		}
		
		~TextFile(){
			cout << "Text File Closed" << endl;
		}
		
};

int main(){
	TextFile T1;
	return 0;
}
