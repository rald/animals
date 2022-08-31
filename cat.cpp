#include "cat.h"



Cat::Cat() {
};	 



Cat::Cat(string _name,double _atk) {
	setName(_name);
	setATK(_atk);
}; 



void Cat::speak() {
	cout << getName() << " says: meow meow" << endl;
};
