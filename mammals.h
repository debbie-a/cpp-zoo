#ifndef __MAMMALS_H__
#define __MAMMALS_H__
#include "animal.h"
#include "imammals.h"


class Mammals: public Animal, public Imammals
{
public:
	Mammals(const std::string &name);

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;
};

inline Mammals::Mammals(const std::string &name):Animal(name){}

inline std::ostream& Mammals::print(std::ostream &os) const
{
	os << "Mammals" << std::endl;
	Animal::print(os);
	os << "Pregnancy Duration: " << getPregnancyDuration() << " days" << std::endl;
	os << "Number of Young Born in Each Litter: " << getNumberOfYoungBorn() << std::endl;
	return os;
}
#endif /*__MAMMALS_H__*/
