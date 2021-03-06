#ifndef __SHARK_H__
#define __SHARK_H__
#include "fish_and_sea_creatures.h"

class Shark:public FishAndSeaCreatures
{
public:
	Shark(const std::string &name);

	/*virtual*/std::string getSpecies() const;
	/*virtual*/unsigned short int getLifeExpectancy() const;
	/*virtual*/ const std::vector<CONTINENTS>& getContinents() const;
	/*virtual*/ const std::vector<ANIMAL_FOOD>& getFoodEats() const;
	/*virtual*/unsigned short int getSpeed() const;
	/*virtual*/unsigned short int getLowestDepthCanReach() const;

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;

private:
	static const std::string s_species;
	static const unsigned short int s_lifeExpectancy = 30;
	static const std::vector<CONTINENTS> s_continents;
	static const std::vector<ANIMAL_FOOD> s_foodEats;
	static const unsigned short int s_speed = 50;
	static const unsigned short int s_lowestDepthCanReach = 3000;
	
};

inline Shark::Shark(const std::string &name):FishAndSeaCreatures(name){}

inline std::string Shark::getSpecies() const
{
	return s_species;
}
inline unsigned short int Shark::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline  const std::vector<CONTINENTS>& Shark::getContinents() const
{
	return s_continents;
}
inline  const std::vector<ANIMAL_FOOD>& Shark::getFoodEats() const
{
	return s_foodEats;
}
inline unsigned short int Shark::getSpeed() const
{
	return s_speed;
}
inline unsigned short int Shark::getLowestDepthCanReach() const
{
	return s_lowestDepthCanReach;
}
inline std::ostream& Shark::print(std::ostream &os) const
{
	os<< "***Shark***" << std::endl;
	FishAndSeaCreatures::print(os);
        return os;
}
#endif /*__SHARK_H__*/
