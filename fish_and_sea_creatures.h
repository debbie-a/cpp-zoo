#ifndef __FISH_AND_SEA_CREATURES_H__
#define __FISH_AND_SEA_CREATURES_H__
#include "animal.h"

class FishAndSeaCreatures: public Animal
{
public:
	FishAndSeaCreatures(const std::string &name);
	~FishAndSeaCreatures();

	virtual unsigned short int getLowestDepthCanReach() const=0;
	
protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;
};

inline FishAndSeaCreatures::FishAndSeaCreatures(const std::string &name):Animal(name){}
inline FishAndSeaCreatures::~FishAndSeaCreatures(){}

inline std::ostream& FishAndSeaCreatures::print(std::ostream &os) const
{
	os << "Fish and Sea Creatures" << std::endl;
	Animal::print(os);
	os << "Lowest Depth Can Reach: " << getLowestDepthCanReach() << " meters" << std::endl;
        return os;
}
#endif /*__FISH_AND_SEA_CREATURES_H__*/

