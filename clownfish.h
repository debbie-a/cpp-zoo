#ifndef __CLOWNFISH_H__
#define __CLOENFISH_H__
#include "fish_and_sea_creatures.h"

class Clownfish:public FishAndSeaCreatures
{
public:
	Clownfish(const std::string &name);

	/*virtual*/std::string getSpecies() const;
	/*virtual*/unsigned short int getLifeExpectancy() const;
	/*virtual*/const std::vector<CONTINENTS>& getContinents() const;
	/*virtual*/const std::vector<ANIMAL_FOOD>& getFoodEats() const;
	/*virtual*/unsigned short int getSpeed() const;
	/*virtual*/unsigned short int getLowestDepthCanReach() const;

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;

private:
	static const std::string s_species;
	static const unsigned short int s_lifeExpectancy = 6;
	static const std::vector<CONTINENTS> s_continents;
	static const std::vector<ANIMAL_FOOD> s_foodEats;
	static const unsigned short int s_speed = 400;
	static const unsigned short int s_lowestDepthCanReach = 12;
	
};

inline Clownfish::Clownfish(const std::string &name):FishAndSeaCreatures(name){}

inline std::string Clownfish::getSpecies() const
{
	return s_species;
}
inline unsigned short int Clownfish::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline const std::vector<CONTINENTS>& Clownfish::getContinents() const
{
	return s_continents;
}
inline const std::vector<ANIMAL_FOOD>& Clownfish::getFoodEats() const
{
	return s_foodEats;
}
inline unsigned short int Clownfish::getSpeed() const
{
	return s_speed;
}
inline unsigned short int Clownfish::getLowestDepthCanReach() const
{
	return s_lowestDepthCanReach;
}
inline std::ostream& Clownfish::print(std::ostream &os) const
{
	os<< "***Clownfish***" << std::endl;
	FishAndSeaCreatures::print(os);
        return os;
}
#endif/*__CLOENFISH_H__*/
