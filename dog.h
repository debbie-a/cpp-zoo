#ifndef __DOG_H__
#define  __DOG_H__
#include "mammals.h"
class Dog: public Mammals
{
public:
	Dog(std::string name):Mammals(name){}
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

inline std::string Dog::getSpecies() const
{
	return s_species;
}
inline unsigned short int Dog::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline std::string Dog::getContinents() const
{
	std::string continents;
	for (std::vector<std::string>::const_iterator i = s_continents.begin(); i != s_continents.end(); ++i)
    		continents += *i + ", ";
	return continents;
}
inline std::string Dog::getFoodEats() const
{
	std::string food;
	for (std::vector<std::string>::const_iterator i = s_foodEats.begin(); i != s_foodEats.end(); ++i)
    		food += *i + ", ";
	return food;
}
inline unsigned short int Dog::getSpeed() const
{
	return s_speed;
}
inline unsigned short int Dog::getPregnancyDuration() const
{
	return s_pregnancyDuration;
}
inline unsigned short int Dog::getNumberOfYoungBorn() const
{
	return s_numberOfYoungBorn;
}
inline std::ostream& Dog::print(std::ostream &os) const
{
	os<< "***Dog***" << std::endl;
	Mammals::print(os);
        return os;
}
#endif /* __DOG_H__*/
