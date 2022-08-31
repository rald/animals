#ifndef CAT_H
#define CAT_H

#include <iostream>

#include "animal.h"



using namespace std;



class Cat: public Animal {

public:

	Cat();

	Cat(string _name,double _atk);

	virtual void speak();
	
};




#endif /* CAT_H */


