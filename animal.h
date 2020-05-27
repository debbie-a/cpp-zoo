#ifndef __ANIMAL_H__
#define __ANIMAL_H__
#include <iostream> 
#include <vector>
#include <string>
static const std::string continents[] = {"Africa", "Antarctica", "Asia", "Europe", "North America", "Oceania", "South America"};
static const std::string animalFood[] = {"fish", "nuts", "seeds","meat","fruit", "vegetable", "tree leaves", "branches", "insects", "grass"};

enum CONTINENTS
{
	E_AFRICA,
	E_ANTARCTICA,
	E_ASIA,
	E_EUROPE,
	E_NORTH_AMERICA,
	E_OCEANIA,
	E_SOUTH_AMERICA
};
enum ANIMAL_FOOD
{
	E_FISH,
	E_NUTS,
	E_SEEDS,
	E_MEAT,
	E_FRUIT,
	E_VEGETABLE,
	E_TREE_LEAVES,
	E_BRANCHES,
	E_INSECTS,
	E_GRASS
};
class Animal
{
	friend std::ostream & operator<<(std::ostream &os, const Animal &animal);
	friend std::ostream & operator<<(std::ostream &os, const Animal *animal);
public:
	Animal(const std::string &name);
	virtual ~Animal();
	
	virtual std::string getName() const;
	virtual std::string getSpecies() const =0;
	virtual unsigned short int getLifeExpectancy() const =0;
	virtual const std::vector<CONTINENTS>& getContinents() const =0;
	virtual const std::vector<ANIMAL_FOOD>& getFoodEats() const =0;
	virtual unsigned short int getSpeed() const =0;

protected:
	virtual std::ostream& print(std::ostream& os) const;

private:
	std::string m_name;
};

inline Animal::Animal(const std::string &name):m_name(name){}
inline Animal::~Animal(){}

inline std::string Animal::getName() const
{
	return m_name;
}
inline std::ostream& operator<< (std::ostream& os, const Animal &animal)
{
    animal.print(os);
    return os;
}
inline std::ostream& operator<< (std::ostream& os, const Animal *animal)
{
    animal->print(os);
    return os;
}
#endif/*__ANIMAL_H__*/
