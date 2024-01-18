

#include<bits/stdc++.h>
using namespace std;

class Munus_family{         //class initializaton
private:			        //Access specifier
	string Name;	        //Properties
	string relationship;
	int Age;
	string gender;
public:						//Access specifier
	void setRelation_Age_gender(string name,string relation,int age, string gendo){            // set setting values 
		Name=name;
		relationship=relation;																//methods(all functions whithin the class
		Age=age;
		gender=gendo;
	}
	
	string getName(){                                                  //get,retrieve function for private
		return Name;
	}
	string getRelation(){
		return relationship;
	}
	
	int getAge(){
		return Age;
	}
	
	string getGender(){
		return gender;
	}
	
	void character(){
			cout<<"Your name is : "<<Name<<endl;
			cout<<Name<<" relation is : "<<relationship<<endl;
			cout<<Name<<" Age is : "<<Age<<endl;
			cout<<Name<<" gender is : "<<gender<<endl;
	}
};

int main(){
	Munus_family Boopalan;
	Boopalan.setRelation_Age_gender("Boopalan","son",21,"male");
	
	Munus_family Sathish;
	Sathish.setRelation_Age_gender("Sathis kumar","son",20,"female");
	
	Munus_family Dhanam;
	Dhanam.setRelation_Age_gender("Dhanalakshmi","wife",47,"female");
	
	Dhanam.character();
	
}