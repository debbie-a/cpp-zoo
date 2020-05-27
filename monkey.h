#ifndef __MONKEY_H__
#define  __MONKEY_H__
#include "mammals.h"

class Monkey: public Mammals
{
public:
	Monkey(const std::string &name);

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
	static const unsigned short int s_lifeExpectancy = 20;
	static const std::vector<CONTINENTS> s_continents;
	static const std::vector<ANIMAL_FOOD> s_foodEats;
	static const unsigned short int s_speed = 55;
	static const unsigned short int s_pregnancyDuration = 164;
	static const unsigned short int s_numberOfYoungBorn = 1;
};

inline Monkey::Monkey(const std::string &name):Mammals(name){}

inline std::string Monkey::getSpecies() const
{
	return s_species;
}
inline unsigned short int Monkey::getLifeExpectancy() const
{
	return s_lifeExpectancy;
}
inline const std::vector<CONTINENTS>& Monkey::getContinents() const
{
	return s_continents;
}
inline const std::vector<ANIMAL_FOOD>& Monkey::getFoodEats() const
{
	return s_foodEats;
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
