#include<iostream>
using namespace std;

class color{
	private:
		string color;
		public:
			string getcolor(){
				return color;
			}
			void setcolor(string n){
				color=n;
				return;
			}
			void displaycolor(){
				cout<<"color "<<color<<endl;
				return ;
			}
};

int main(){
	color c1;
	c1.setcolor("white");
	c1.displaycolor();
}
