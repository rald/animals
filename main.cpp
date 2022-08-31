#include <iostream>
#include <unistd.h>

#include "animal.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"



using namespace std;



int main(void) {

	srand((unsigned)time(NULL));
	
	Animal *animals[3] = {
		new Dog("bantay", 0.1),
		new Cat("muning", 0.1),
		new Bird("adarna", 0.1)		
	};

	int numAnimals=3;
	int numAlive=3;
	int win=-1;
	
	while(numAlive>1) {

		int a=rand()%numAnimals;

		while(!animals[a]->getAlive()) {
			a=(a+1)%numAnimals;
		}

		int b=rand()%numAnimals;
		
		while(a==b || !animals[b]->getAlive()) {
			b=(b+1)%numAnimals;
		}
		
		animals[a]->attack(animals[b]);

		usleep(1000000L);

		if(animals[b]->getLife()<=0) {
			numAlive--;
			if(numAlive==1) {
				win=a;
				break;
			}
		}
	}

	cout << animals[win]->getName() << " wins!" << endl;

		
	return 0;	
}
