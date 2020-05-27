#ifndef __SNOWY_OWL_H__
#define __SNOWY_OWL_H__
#include "birds.h"

class SnowyOwl:public Birds
{
public:
	SnowyOwl(const std::string &name);

	/*virtual*/std::string getSpecies() const;
	/*virtual*/unsigned short int getLifeExpectancy() const;
	/*virtual*/const std::vector<CONTINENTS>& getContinents() const;
	/*virtual*/const std::vector<ANIMAL_FOOD>& getFoodEats() const;
	/*virtual*/unsigned short int getSpeed() const;
	/*virtual*/unsigned short int getTypicalHeightCanReach() const;
	/*virtual*/unsigned short int getWingSpan() const;

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;

private:
	static const std::string s_species;
	static const unsigned short int s_lifeExpectancy = 10;
	static const std::vector<CONTINENTS> s_continents;
	static const std::vector<ANIMAL_FOOD> s_foodEats;
	static const unsigned short int s_speed = 75;
	static const unsigned short int s_typicalHeightCanReach = 30;
	static const unsigned short int s_wingSpan = 165;
};

inline SnowyOwl::SnowyOwl(const std::string &name):Birds(name){}

inline std::string SnowyOwl::getSpecies() const
{
	return s_species;
}
inline unsigned short int SnowyOwl::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline const std::vector<CONTINENTS>& SnowyOwl::getContinents() const
{
	return s_continents;
}
inline const std::vector<ANIMAL_FOOD>& SnowyOwl::getFoodEats() const
{
	return s_foodEats;
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
