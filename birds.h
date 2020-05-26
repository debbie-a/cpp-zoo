#ifndef __BIRDS_H__
#define __BIRDS_H__
#include "animal.h"

class Birds: public Animal
{
public:
	Birds(std::string name):Animal(name){}
	~Birds(){}
	virtual unsigned short int getTypicalHeightCanReach() const =0;
	virtual unsigned short int getWingSpan() const =0;

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;
};

inline std::ostream& Birds::print(std::ostream &os) const
{
	os << "Birds" << std::endl;
	Animal::print(os);
	os << "Typical Height Can Reach: " << getTypicalHeightCanReach() << " meters" << std::endl;
	os << "Wing Span: " << getWingSpan() << " cm" << std::endl;
        return os;
}
#endif /*__BIRDS_H__*/