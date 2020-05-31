#include "whale.h"

const std::string Whale::s_species = "baleen whales,Odontoceti,toothed whales";
static const CONTINENTS temp1[] = {E_AFRICA,E_ANTARCTICA,E_ASIA};
const std::vector<CONTINENTS> Whale::s_continents(temp1, temp1 + sizeof(temp1)/sizeof(temp1[0]));
static const ANIMAL_FOOD temp2[] = {E_FISH,E_MEAT};
const std::vector<ANIMAL_FOOD> Whale::s_foodEats(temp2, temp2 + sizeof(temp2)/sizeof(temp2[0]));



