#include "animal.h"
std::ostream& Animal::print(std::ostream &os) const
{
	os << "Name: " << getName() << std::endl;
	os << "Species: " << getSpecies() << std::endl;
	os << "Life Expectancy: " << getLifeExpectancy() << " years" << std::endl;
	std::string continent;
	for (std::vector<CONTINENTS>::const_iterator i = getContinents().begin(); i !=getContinents().end(); ++i)
    		continent += continents[*i] + ", ";
	os << "Continents: " <<continent << std::endl;
	std::string food;
	for (std::vector<ANIMAL_FOOD>::const_iterator i = getFoodEats().begin(); i !=  getFoodEats().end(); ++i)
    		food += animalFood[*i] + ", ";
	os << "Food it Eats: " << food << std::endl;
	os << "Speed: " << getSpeed() << " Km/h" << std::endl;
        return os;
}

