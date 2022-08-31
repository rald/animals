#ifndef DOG_H
#define DOG_H

#include <iostream>

#include "animal.h"



using namespace std;



class Dog: public Animal {

public:

	Dog();

	Dog(string _name,double _atk);

	virtual void speak();
	
};




#endif /* DOG_H */


