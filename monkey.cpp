#include "monkey.h"

const std::string Monkey::s_species = "Rhesus, Macaque, Crab-Eating Macaque";
static const CONTINENTS temp1[] = {E_AFRICA,E_ASIA,E_EUROPE,E_NORTH_AMERICA,E_SOUTH_AMERICA};
const std::vector<CONTINENTS> Monkey::s_continents(temp1, temp1 + sizeof(temp1)/sizeof(temp1[0]));
static const ANIMAL_FOOD temp2[] = {E_NUTS,E_FRUIT,E_VEGETABLE};
const std::vector<ANIMAL_FOOD> Monkey::s_foodEats(temp2, temp2 + sizeof(temp2)/sizeof(temp2[0]));
