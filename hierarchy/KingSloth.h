#ifndef _KING_SLOTH_H_
#define _KING_SLOTH_H

#include "sloth.h"

class KingSloth : public Sloth
{
	int Glory;
public:
	KingSloth();
	int GetGlory();
	void SetGlory(int &g);
	int glorify(int &n);
};
#endif // !_KING_SLOTH_H_
