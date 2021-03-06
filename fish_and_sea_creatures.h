#ifndef __FISH_AND_SEA_CREATURES_H__
#define __FISH_AND_SEA_CREATURES_H__
#include "animal.h"
#include "ifish_and_sea_creatures.h"


class FishAndSeaCreatures: public Animal, public IfishAndSeaCreatures
{
public:
	FishAndSeaCreatures(const std::string &name);

protected:
	/*virtual*/ std::ostream& print(std::ostream& os) const;
};

inline FishAndSeaCreatures::FishAndSeaCreatures(const std::string &name):Animal(name){}

inline std::ostream& FishAndSeaCreatures::print(std::ostream &os) const
{
	os << "Fish and Sea Creatures" << std::endl;
	Animal::print(os);
	os << "Lowest Depth Can Reach: " << getLowestDepthCanReach() << " meters" << std::endl;
	return os;
}
#endif /*__FISH_AND_SEA_CREATURES_H__*/

