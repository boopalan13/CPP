//constructure(special type of function)

#include<bits/stdc++.h>
using namespace std;

class operation{
	int value1;
	int value2;
public:
	operation(int a,int b){      //----> Same name as the class for immeediate call when object is created 
		value1=a;				// commonly used for initializing values
		value2=b;			   // There may be one or more constructors(for overloading)
	}
	
	~operation(){								// destructure is preceded by '~' this sybmbol of constructure(eg.~construcutr)
		cout<<"Operation is Destroyed.!";	   // its working while constructure is going to be finished(destroyed)
	}          								  // not necessary coz which idicates the finishing (destroying of function) 
	
	int getValue1(){
		return value1;
	}
	
	int getValue2(){
		return value2;
	}
	
	
	void add(){
		cout<<"Addition is : "<<value1+value2<<endl;
	}
	
	void sub(){
		cout<<"Subtraction is : "<<value1-value2<<endl;
	}
	
};

int main(){
	operation op1(7,6);
	op1.add();
	op1.sub();
	cout<<"Value 1 is : "<<op1.getValue1()<<endl;
	cout<<"Value 2 is : "<<op1.getValue2()<<endl;
	
	
}