#ifndef __MONKEY_H__
#define  __MONKEY_H__
#include "mammals.h"

class Monkey: public Mammals
{
public:
	Monkey(std::string name):Mammals(name){}
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

inline std::string Monkey::getSpecies() const
{
	return s_species;
}
inline unsigned short int Monkey::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline std::string Monkey::getContinents() const
{
	std::string continents;
	for (std::vector<std::string>::const_iterator i = s_continents.begin(); i != s_continents.end(); ++i)
    		continents += *i + ", ";
	return continents;
}
inline std::string Monkey::getFoodEats() const
{
	std::string food;
	for (std::vector<std::string>::const_iterator i = s_foodEats.begin(); i != s_foodEats.end(); ++i)
    		food += *i + ", ";
	return food;
}
inline unsigned short int Monkey::getSpeed() const
{
	return s_speed;
}
inline unsigned short int Monkey::getPregnancyDuration() const
{
	return s_pregnancyDuration;
}
inline unsigned short int Monkey::getNumberOfYoungBorn() const
{
	return s_numberOfYoungBorn;
}
inline std::ostream& Monkey::print(std::ostream &os) const
{
	os<< "***Monkey***" << std::endl;
	Mammals::print(os);
        return os;
}
#endif /* __MONKEY_H__*/
