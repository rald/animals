#ifndef BIRD_H
#define BIRD_H

#include <iostream>

#include "animal.h"



using namespace std;



class Bird: public Animal {

public:

	Bird();

	Bird(string _name,double _atk);

	virtual void speak();
	
};




#endif /* BIRD_H */


