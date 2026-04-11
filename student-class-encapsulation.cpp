#include <iostream>
using namespace std;

class student{
	private:
		string name;
		int age;
		
		public:
			void setname(string n){
				name = n;
			}
			void setage(int a){
				age=a;
			}
			string getname(){
				return name;
			}
			int getage(){
				return age;
			}
};

int main(){
	
	student s;
	s.setname("ishwa");
	s.setage(20);
	
	cout<<"name of student "<<s.getname()<<endl;
	cout<<"age of student "<<s.getage()<<endl;
	
	return 0;
}
