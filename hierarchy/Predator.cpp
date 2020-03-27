#include "predator.h"
#include <stdlib.h>
Predator::Predator() : Animal()
{
	fangs = 4;
}
int Predator::GetFangs()
{
	return  fangs;
}
void Predator:: SetFangs(int f)
{
	fangs = f;
}
int Predator::KYC()
{
	return rand() * fangs;
}
