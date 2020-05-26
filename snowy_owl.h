#ifndef __SNOWY_OWL_H__
#define __SNOWY_OWL_H__
#include "birds.h"

class SnowyOwl:public Birds
{
public:
	SnowyOwl(std::string name):Birds(name){}
	/*virtual*/std::string getSpecies() const;
	/*virtual*/unsigned short int getLifeExpectancy() const;
	/*virtual*/std::string getContinents() const;
	/*virtual*/std::string getFoodEats() const;
	/*virtual*/unsigned short int getSpeed() const;
	/*virtual*/unsigned short int getTypicalHeightCanReach() const;
	/*virtual*/unsigned short int getWingSpan() const;

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;

private:
	static const std::string s_species;
	static const unsigned short int s_lifeExpectancy;
	static const std::vector<std::string> s_continents;
	static const std::vector<std::string> s_foodEats;
	static const unsigned short int s_speed;
	static const unsigned short int s_typicalHeightCanReach;
	static const unsigned short int s_wingSpan;
};

inline std::string SnowyOwl::getSpecies() const
{
	return s_species;
}
inline unsigned short int SnowyOwl::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline std::string SnowyOwl::getContinents() const
{
	std::string continents;
	for (std::vector<std::string>::const_iterator i = s_continents.begin(); i != s_continents.end(); ++i)
    		continents += *i + ", ";
	return continents;
}
inline std::string SnowyOwl::getFoodEats() const
{
	std::string food;
	for (std::vector<std::string>::const_iterator i = s_foodEats.begin(); i != s_foodEats.end(); ++i)
    		food += *i + ", ";
	return food;
}
inline unsigned short int SnowyOwl::getSpeed() const
{
	return s_speed;
}
inline unsigned short int SnowyOwl::getTypicalHeightCanReach() const
{
	return s_typicalHeightCanReach;
}
inline unsigned short int SnowyOwl::getWingSpan() const
{
	return s_wingSpan;
}
inline std::ostream& SnowyOwl::print(std::ostream &os) const
{
	os<< "***Snowy Owl***" << std::endl;
        Birds::print(os);
        return os;
}
#endif /*__SNOWY_OWL_H__*/
