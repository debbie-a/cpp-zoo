#ifndef __DOG_H__
#define  __DOG_H__
#include "mammals.h"
class Dog: public Mammals
{
public:
	Dog(const std::string &name);

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
	static const unsigned short int s_lifeExpectancy = 13;
	static const std::vector<CONTINENTS> s_continents;
	static const std::vector<ANIMAL_FOOD> s_foodEats;
	static const unsigned short int s_speed = 30;
	static const unsigned short int s_pregnancyDuration = 68;
	static const unsigned short int s_numberOfYoungBorn = 5;
};

inline Dog::Dog(const std::string &name):Mammals(name){}


inline std::string Dog::getSpecies() const
{
	return s_species;
}
inline unsigned short int Dog::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline const std::vector<CONTINENTS>& Dog::getContinents() const
{
	return s_continents;
}
inline const std::vector<ANIMAL_FOOD>& Dog::getFoodEats() const
{
	return s_foodEats;
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
