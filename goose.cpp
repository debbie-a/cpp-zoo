#include "goose.h"

const std::string Goose::s_species = "Barnacle Goose, Brent Goose, Cackling Goose, Canada Goose, Hawaiian Goose, Red-breasted Goose, Bar-headed Goose";
static const CONTINENTS temp1[] = {E_ASIA,E_EUROPE,E_NORTH_AMERICA};
const std::vector<CONTINENTS> Goose::s_continents(temp1, temp1 + sizeof(temp1)/sizeof(temp1[0]));
static const ANIMAL_FOOD temp2[] = {E_FISH,E_NUTS,E_TREE_LEAVES,E_BRANCHES,E_INSECTS,E_GRASS};
const std::vector<ANIMAL_FOOD> Goose::s_foodEats(temp2, temp2 + sizeof(temp2)/sizeof(temp2[0]));

