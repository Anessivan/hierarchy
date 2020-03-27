#include "KingCat.h"
#include <iostream>

KingCat::KingCat() :Cat()
{
	Glory = 5;
	color = 2;
}

int KingCat::Glorify(int &n)
{
	std::cout << "Hail to the King of cats" << std::endl;
	return Glory * n;
}
