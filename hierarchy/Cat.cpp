#include "Cat.h"
#include <stdlib.h>
Cat::Cat() : Predator()
{
	claw = 18;
}
int Cat::Cap()
{
	return rand() * claw;
}