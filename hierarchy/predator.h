#ifndef _PREDATOR_H_
#define _PREDATOR_H_
#include "animal.h"
class Predator : public Animal
{
protected:
	int fangs;
public:
	Predator();
	int GetFangs();
	void SetFangs(int f);
	int KYC();
};
#endif
