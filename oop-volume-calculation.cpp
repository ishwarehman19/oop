#include<iostream>
using namespace std;

class totalvolume{
	public:
		int vol;
		
		totalvolume(){
			int length=4;
			int width=5;
			int height=9;
			vol=length*width*height;
		}
		
		void display(){
			cout<<"total volume: "<<vol<<endl;
		}
};

int main(){
	totalvolume v1;
	v1.display();
	
	return 0;
}
