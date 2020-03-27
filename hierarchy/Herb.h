#ifndef _HERB_H_
#define _HERB_H_
#include "animal.h"

class Herb : public Animal
{
protected: 
	int bact;
public:
	Herb();
	void SetBact(int n);
	int GetBact();
	int Climb();
};

#endif // 
