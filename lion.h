#ifndef __LION_H__
#define __LION_H__
#include "mammals.h"

class Lion:public Mammals
{
public:
	Lion(const std::string &name);

	/*virtual*/std::string getSpecies() const;
	/*virtual*/unsigned short int getLifeExpectancy() const;
	/*virtual*/const std::vector<CONTINENTS>& getContinents() const;
	/*virtual*/const std::vector<ANIMAL_FOOD>& getFoodEats() const;
	/*virtual*/unsigned short int getSpeed() const;
	/*virtual*/unsigned short int getPregnancyDuration() const;
	/*virtual*/unsigned short int getNumberOfYoungBorn() const;

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;

private:
	static const std::string s_species;
	static const unsigned short int s_lifeExpectancy = 50;
	static const std::vector<CONTINENTS> s_continents;
	static const std::vector<ANIMAL_FOOD> s_foodEats;
	static const unsigned short int s_speed = 80;
	static const unsigned short int s_pregnancyDuration = 110;
	static const unsigned short int s_numberOfYoungBorn = 6;
};

inline Lion::Lion(const std::string &name):Mammals(name){}

inline std::string Lion::getSpecies() const
{
	return s_species;
}
inline unsigned short int Lion::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline const std::vector<CONTINENTS>& Lion::getContinents() const
{
	return s_continents;
}
inline const std::vector<ANIMAL_FOOD>& Lion::getFoodEats() const
{
	return s_foodEats;
}
inline unsigned short int Lion::getSpeed() const
{
	return s_speed;
}
inline  unsigned short int Lion::getPregnancyDuration() const
{
	return s_pregnancyDuration;
}
inline  unsigned short int Lion::getNumberOfYoungBorn() const
{
	return s_numberOfYoungBorn;
}
inline std::ostream& Lion::print(std::ostream &os) const
{
	os<< "***Lion***" << std::endl;
	Mammals::print(os);
        return os;
}
#endif /*__LION_H__*/
