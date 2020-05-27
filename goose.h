#ifndef __GOOSE_H__
#define __GOOSE_H__
#include "birds.h"

class Goose:public Birds
{
public:
	Goose(const std::string &name);

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
	static const unsigned short int s_lifeExpectancy = 24;
	static const std::vector<CONTINENTS> s_continents;
	static const std::vector<ANIMAL_FOOD> s_foodEats;
	static const unsigned short int s_speed= 70;
	static const unsigned short int s_typicalHeightCanReach = 7300;
	static const unsigned short int s_wingSpan = 185;
};

inline Goose::Goose(const std::string &name):Birds(name){}

inline std::string Goose::getSpecies() const
{
	return s_species;
}
inline unsigned short int Goose::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline const std::vector<CONTINENTS>& Goose::getContinents() const
{
	return s_continents;
}
inline const std::vector<ANIMAL_FOOD>& Goose::getFoodEats() const
{
	return s_foodEats;
}
inline unsigned short int Goose::getSpeed() const
{
	return s_speed;
}
inline unsigned short int Goose::getTypicalHeightCanReach() const
{
	return s_typicalHeightCanReach;
}
inline unsigned short int Goose::getWingSpan() const
{
	return s_wingSpan;
}
inline std::ostream& Goose::print(std::ostream &os) const
{
	os<< "***Goose***" << std::endl;
	Birds::print(os);
        return os;
}
#endif /*__GOOSE_H__*/
