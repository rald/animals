#include "dog.h"



Dog::Dog() {
};	 



Dog::Dog(string _name,double _atk) {
	setName(_name);
	setATK(_atk);	
};	 



void Dog::speak() {
	cout << getName() << " says: aw aw" << endl;
};
