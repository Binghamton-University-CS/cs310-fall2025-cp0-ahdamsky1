#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"

using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal new_animal){		
	numAnimals = 1;
	animal = new_animal;	
}

AnimalsInZoo::AnimalsInZoo(){
	numAnimals = 0;
}

void AnimalsInZoo::display() {
	cout << "numAnimals: " << numAnimals << endl;
	if (numAnimals == 1){
		animal.display();
	}
}
