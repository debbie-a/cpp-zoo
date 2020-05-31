#ifndef __BIRDS_H__
#define __BIRDS_H__
#include "animal.h"
#include "ibirds.h"


class Birds: public Animal, public Ibirds
{
public:
	Birds(const std::string &name);

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;
};

inline Birds::Birds(const std::string &name):Animal(name){}

inline std::ostream& Birds::print(std::ostream &os) const
{
	os << "Birds" << std::endl;
	Animal::print(os);
	os << "Typical Height Can Reach: " << getTypicalHeightCanReach() << " meters" << std::endl;
	os << "Wing Span: " << getWingSpan() << " cm" << std::endl;
        return os;
}
#endif /*__BIRDS_H__*/
