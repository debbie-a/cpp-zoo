#ifndef __ANIMAL_H__
#define __ANIMAL_H__
#include <iostream> 
#include <vector>
#include <string>
static const char *continents[] = {"Africa", "Antarctica", "Asia", "Europe", "North America", "Oceania", "South America"};
static const char *animalFood[] = {"fish", "nuts", "seeds","meat","fruit", "vegetable", "tree leaves", "branches", "insects", "grass"};

class Animal
{
	friend std::ostream & operator<<(std::ostream &os, const Animal &animal);
public:
	Animal(const std::string &name);
	virtual ~Animal();

	virtual std::string getSpecies() const =0;
	virtual unsigned short int getLifeExpectancy() const =0;
	virtual std::string getContinents() const =0;
	virtual std::string getFoodEats() const =0;
	virtual unsigned short int getSpeed() const =0;

protected:
	virtual std::ostream& print(std::ostream& os) const;

private:
	std::string m_name;
};

inline Animal::Animal(const std::string &name):m_name(name){}
inline Animal::~Animal(){}

inline std::ostream& operator<< (std::ostream& os, const Animal& animal)
{
    animal.print(os);
    return os;
}
inline std::ostream& Animal::print(std::ostream &os) const
{
	os << "Name: " << m_name << std::endl;
	os << "Species: " << getSpecies() << std::endl;
	os << "Life Expectancy: " << getLifeExpectancy() << " years" << std::endl;
	os << "Continents: " << getContinents() << std::endl;
	os << "Food it Eats: " << getFoodEats() << std::endl;
	os << "Speed: " << getSpeed() << " Km/h" << std::endl;
        return os;
}

#endif/*__ANIMAL_H__*/
