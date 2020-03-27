#ifndef _KING_CAT_H_
#define _KING_CAT_H_

#include "Cat.h"

class KingCat : public Cat
{
	int Glory;
public:
	KingCat();
	int Glorify(int &n);
};
#endif
