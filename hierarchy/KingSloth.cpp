#include "KingSloth.h"
#include <iostream>

KingSloth::KingSloth(): Sloth()
{
	Glory = 5;
	color = 2;
}

int KingSloth::GetGlory()
{
	return Glory;
}

void KingSloth::SetGlory(int &g)
{
	Glory = g;
}

int KingSloth::glorify(int &n)
{
	std::cout << "Hail to the King" << std::endl;
	return Glory * n;
}
