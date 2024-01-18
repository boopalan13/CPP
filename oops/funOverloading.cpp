//function overloading - a function can be used for many operations within the same name
//which gives easier understanding of oop's polimorphism
#include<bits/stdc++.h>
using namespace std;


int sum(int n,int m){                //sum function in integer
	return n+m;
}
float sum(float n,float m){			//sum function(same name) im float
	return n+m;					   // able to create a many same name function
}								  // compiler automatically find the suitable function by type of data(data type eg,.int,float) or bu numbers(parameter) count

int main(){
	int a=1,b=2;
	float c=0.5,d=1.5;            //if,else can be written as (return a<0?-a:a;)
	cout<<sum(a,b)<<endl;       
	cout<<sum(c,d)<<endl;
}