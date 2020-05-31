#ifndef __WHALE_H__
#define __WHALE_H__
#include "imammals.h"
#include "fish_and_sea_creatures.h"


class Whale: public Imammals, public FishAndSeaCreatures
{
public:
	Whale(const std::string& name);
	/*virtual*/ std::string getSpecies() const;
	/*virtual*/ unsigned short int getLifeExpectancy() const;
	/*virtual*/ const std::vector<CONTINENTS>& getContinents() const;
	/*virtual*/ const std::vector<ANIMAL_FOOD>& getFoodEats() const;
	/*virtual*/ unsigned short int getSpeed() const;

	/*virtual*/ unsigned short int getPregnancyDuration() const;
	/*virtual*/ unsigned short int getNumberOfYoungBorn() const;

	/*virtual*/ unsigned short int getLowestDepthCanReach() const;

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;

private:
	static const std::string s_species;
	static const unsigned short int s_lifeExpectancy = 200;
	static const std::vector<CONTINENTS> s_continents;
	static const std::vector<ANIMAL_FOOD> s_foodEats;
	static const unsigned short int s_speed = 20;
	static const unsigned short int s_pregnancyDuration = 18;
	static const unsigned short int s_numberOfYoungBorn = 2;
	static const unsigned short int s_lowestDepthCanReach = 2992;
};

inline Whale::Whale(const std::string& name):FishAndSeaCreatures(name){}

inline std::string Whale::getSpecies() const
{
	return s_species;
}
inline unsigned short int Whale::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline const std::vector<CONTINENTS>& Whale::getContinents() const
{
	return s_continents;
}
inline const std::vector<ANIMAL_FOOD>& Whale::getFoodEats() const
{
	return s_foodEats;
}
inline unsigned short int Whale::getSpeed() const
{
	return s_speed;
}
inline  unsigned short int Whale::getPregnancyDuration() const
{
	return s_pregnancyDuration;
}
inline  unsigned short int Whale::getNumberOfYoungBorn() const
{
	return s_numberOfYoungBorn;
}
inline unsigned short int Whale::getLowestDepthCanReach() const
{
	return s_lowestDepthCanReach;
}
inline std::ostream& Whale::print(std::ostream &os) const
{
	os<< "***Whale***" << std::endl;
	os << "Mammals & ";
	FishAndSeaCreatures::print(os);
	os << "Pregnancy Duration: " << getPregnancyDuration() << " months" << std::endl;
	os << "Number of Young Born in Each Litter: " << getNumberOfYoungBorn() << std::endl;
	return os;
}
#endif/*__WHALE_H__*/
