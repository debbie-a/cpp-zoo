#include "snowy_owl.h"

const std::string SnowyOwl::s_species = "Bubo scandiacus";
static const CONTINENTS temp1[] = {E_ANTARCTICA,E_NORTH_AMERICA};
const std::vector<CONTINENTS> SnowyOwl::s_continents(temp1, temp1 + sizeof(temp1)/sizeof(temp1[0]));
static const ANIMAL_FOOD temp2[] = {E_SEEDS,E_FRUIT};
const std::vector<ANIMAL_FOOD> SnowyOwl::s_foodEats(temp2, temp2 + sizeof(temp2)/sizeof(temp2[0]));
