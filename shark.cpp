#include "shark.h"

const std::string Shark::s_species ="Carcharhinus acronotus, Carcharhinus isodon, Carcharhinus plumbeus, Carcharhinus sorrah, Carcharhinus dussumieri";
static const CONTINENTS temp1[] = {E_AFRICA};
const std::vector<CONTINENTS> Shark::s_continents(temp1, temp1 + sizeof(temp1)/sizeof(temp1[0]));
static const ANIMAL_FOOD temp2[] = {E_FISH,E_NUTS,E_SEEDS};
const std::vector<ANIMAL_FOOD> Shark::s_foodEats(temp2, temp2 + sizeof(temp2)/sizeof(temp2[0]));

