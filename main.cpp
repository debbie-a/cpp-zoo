#include "zoo.h"
#include "lion.h"
#include "monkey.h"
#include "goose.h"
#include "snowy_owl.h"
#include "dog.h"
#include "shark.h"
#include "clownfish.h"


int main()
{
	Lion lion1("Simba");
	Lion lion2("Mufasa");
	Monkey monkey("Rafiki");
	Goose goose1("Akka");
	Goose goose2("Morten");
	SnowyOwl snowyOwl("Hedwig");
	Dog dog("Toto");
	Shark shark("Jaws");
	Clownfish clownfish("Nemo");
	Zoo zoo;
	zoo.addAnimal(&lion1);
	zoo.addAnimal(&lion2);
	zoo.addAnimal(&monkey);
	zoo.addAnimal(&goose1);
	zoo.addAnimal(&goose2);
	zoo.addAnimal(&snowyOwl);
	zoo.addAnimal(&dog);
	zoo.addAnimal(&shark);
	zoo.addAnimal(&clownfish);
	zoo.print();
	return 0;
}
