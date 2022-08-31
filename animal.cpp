#include "animal.h"



Animal::Animal() {
}	 



Animal::Animal(string _name,double _atk) {
	setName(_name);
	setATK(_atk);
}	 



void Animal::setName(string _name) {
	this->name=_name;
}	 



string Animal::getName() {
	return this->name;
}	 



void Animal::setLife(double _life) {
	this->life=_life;
}	 



double Animal::getLife() {
	return this->life;
}	 



void Animal::setATK(double _atk) {
	this->atk=_atk;
}	 



double Animal::getATK() {
	return this->atk;
}	 



void Animal::setAlive(bool _alive) {
	this->alive=_alive;
}	 



bool Animal::getAlive() {
	return this->alive;
}	 



void Animal::speak() {
	cout << getName() << " says: growl" << endl;
}



void Animal::attack(Animal *animal) {

	cout << getName() << " attacks: " << animal->name << endl;

	animal->setDamage(this->atk);

	if(animal->getLife()<=0) {
		animal->setAlive(false);
	}
	
}



void Animal::setDamage(double _damage) {

	setLife(getLife()-_damage);

	if(getLife()<0.01) {
		setLife(0);
	}

	cout << getName() << " life: " <<  setprecision(2) << fixed << getLife() << endl;

	if(this->getLife()==0) {
		cout << getName() << " dies!" << endl;
	}

}


