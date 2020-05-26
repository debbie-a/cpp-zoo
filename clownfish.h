#ifndef __CLOWNFISH_H__
#define __CLOENFISH_H__
#include "fish_and_sea_creatures.h"

class Clownfish:public FishAndSeaCreatures
{
public:
	Clownfish(const std::string &name);

	/*virtual*/std::string getSpecies() const;
	/*virtual*/unsigned short int getLifeExpectancy() const;
	/*virtual*/std::string getContinents() const;
	/*virtual*/std::string getFoodEats() const;
	/*virtual*/unsigned short int getSpeed() const;
	/*virtual*/unsigned short int getLowestDepthCanReach() const;

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;

private:
	static const std::string s_species;
	static const unsigned short int s_lifeExpectancy;
	static const std::vector<std::string> s_continents;
	static const std::vector<std::string> s_foodEats;
	static const unsigned short int s_speed;
	static const unsigned short int s_lowestDepthCanReach;
	
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
inline std::string Clownfish::getContinents() const
{
	std::string continents;
	for (std::vector<std::string>::const_iterator i = s_continents.begin(); i != s_continents.end(); ++i)
    		continents += *i + ", ";
	return continents;
}
inline std::string Clownfish::getFoodEats() const
{
	std::string food;
	for (std::vector<std::string>::const_iterator i = s_foodEats.begin(); i != s_foodEats.end(); ++i)
    		food += *i + ", ";
	return food;
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
