#include "sloth.h"
Sloth::Sloth() : Herb()
{
	power = 0;
	bact = 10;
}
void Sloth::SetPower(int p)
{
	power = p;
}

int Sloth::GetPower()
{
	return power;
}

int Sloth::Climb()
{
	return power * 50;
}
