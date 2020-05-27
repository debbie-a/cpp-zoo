#include "clownfish.h"

const std::string Clownfish:: s_species = "Amphiprion akallopisos, Amphiprion leucokranos, Amphiprion latezonatus, Amphiprion akindynos, Amphiprion bicinctus";
static const CONTINENTS temp1[] = {E_ASIA, E_NORTH_AMERICA};
const std::vector<CONTINENTS> Clownfish::s_continents(temp1, temp1 + sizeof(temp1)/sizeof(temp1[0]));
static const ANIMAL_FOOD temp2[] = {E_MEAT, E_TREE_LEAVES, E_INSECTS};
const std::vector<ANIMAL_FOOD> Clownfish::s_foodEats(temp2, temp2 + sizeof(temp2)/sizeof(temp2[0]));



