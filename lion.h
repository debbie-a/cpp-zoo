#ifndef __LION_H__
#define __LION_H__
#include "mammals.h"

class Lion:public Mammals
{
public:
	Lion(std::string name):Mammals(name){}
	/*virtual*/std::string getSpecies() const;
	/*virtual*/unsigned short int getLifeExpectancy() const;
	/*virtual*/std::string getContinents() const;
	/*virtual*/std::string getFoodEats() const;
	/*virtual*/unsigned short int getSpeed() const;
	/*virtual*/unsigned short int getPregnancyDuration() const;
	/*virtual*/unsigned short int getNumberOfYoungBorn() const;

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;

private:
	static const std::string s_species;
	static const unsigned short int s_lifeExpectancy;
	static const std::vector<std::string> s_continents;
	static const std::vector<std::string> s_foodEats;
	static const unsigned short int s_speed;
	static const unsigned short int s_pregnancyDuration;
	static const unsigned short int s_numberOfYoungBorn;
};

inline std::string Lion::getSpecies() const
{
	return s_species;
}
inline unsigned short int Lion::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline std::string Lion::getContinents() const
{
	std::string continents;
	for (std::vector<std::string>::const_iterator i = s_continents.begin(); i != s_continents.end(); ++i)
    		continents += *i + ", ";
	return continents;
}
inline std::string Lion::getFoodEats() const
{
	std::string food;
	for (std::vector<std::string>::const_iterator i = s_foodEats.begin(); i != s_foodEats.end(); ++i)
    		food += *i + ", ";
	return food;
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
