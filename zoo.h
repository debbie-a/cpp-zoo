#ifndef __ZOO_H__
#define __ZOO_H__
#include "animal.h"

class Zoo
{
public:
	void addAnimal(Animal* animal);
	void print();

private:
	 std::vector<Animal*> m_zoo;
};

inline void Zoo::addAnimal(Animal *animal)
{
	m_zoo.push_back(animal);
}
inline void Zoo::print()
{
    for(std::vector<Animal*>::const_iterator i = m_zoo.begin(); i != m_zoo.end(); ++i)
    	std::cout << **i << std::endl;
}
#endif/*_ZOO_H__*/
