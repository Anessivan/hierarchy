#ifndef _SLOTH_H_
#define _SLOTH_H_

#include "Herb.h"

class Sloth : public Herb
{
	int power;
public:
	Sloth();
	void SetPower(int p);
	int GetPower();
	int Climb();
};

#endif