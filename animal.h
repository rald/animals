#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

using namespace std;



class Animal {

public:

	Animal();

	Animal(string _name,double _atk);

	void setName(string _name);
	string getName();

	void setLife(double _life);
	double getLife();

	void setATK(double _atk);
	double getATK();

	void setDamage(double _damage);

	void setAlive(bool _alive);
	bool getAlive();

	virtual void speak();

	virtual void attack(Animal *_animal);
	
private:
	
	string name;
	double life=1.0;
	double atk=0.1;
	bool alive=true;

};



#endif /* ANIMAL_H */


