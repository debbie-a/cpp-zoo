#include "dog.h"

const std::string Dog::s_species = "Rottweiler, Poodle, French Bulldog, Beagle,Bulldog, Golden Retriever, German Shepherd Dog";
static const CONTINENTS temp1[] = {E_AFRICA,E_ANTARCTICA,E_ASIA,E_EUROPE,E_NORTH_AMERICA,E_OCEANIA,E_SOUTH_AMERICA};
const std::vector< CONTINENTS> Dog::s_continents(temp1, temp1 + sizeof(temp1)/sizeof(temp1[0]));
static const ANIMAL_FOOD temp2[] = {E_FISH,E_NUTS,E_SEEDS,E_MEAT,E_FRUIT,E_VEGETABLE};
const std::vector<ANIMAL_FOOD> Dog::s_foodEats(temp2, temp2 + sizeof(temp2)/sizeof(temp2[0]));

