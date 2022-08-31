#include "bird.h"



Bird::Bird() {
};	 



Bird::Bird(string _name,double _atk) {
	setName(_name);
	setATK(_atk);
};	 



void Bird::speak() {
	cout << getName() << " says: tweet tweet" << endl;
};
