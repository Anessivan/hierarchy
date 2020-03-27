#include "Herb.h"
#include <stdlib.h>
Herb::Herb() : Animal()
{
	bact = 0;
}
void Herb::SetBact(int n)
{
	bact = n;
}

int Herb::GetBact()
{
	return bact;
}

int Herb::Climb()
{
	return rand() % 101;
}
