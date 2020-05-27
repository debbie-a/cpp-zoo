#include "lion.h"

const std::string Lion::s_species = "Panthera leo";
static const CONTINENTS temp1[] = {E_AFRICA,E_ASIA};
const std::vector<CONTINENTS> Lion::s_continents(temp1, temp1 + sizeof(temp1)/sizeof(temp1[0]));
static const ANIMAL_FOOD temp2[] = {E_MEAT,E_FRUIT};
const std::vector<ANIMAL_FOOD> Lion::s_foodEats(temp2, temp2 + sizeof(temp2)/sizeof(temp2[0]));

