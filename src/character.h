#ifndef CHARACTER_H
#define CHARACTER_H

#include "ts_types.h"

class Character {

public:
	static bool fromCodePoint(ts_number cp);
	static bool isWhiteSpace(ts_number cp);
	static bool isLineTerminator(ts_number cp);

	static bool isIdentifierStart(ts_number cp);

};


void  character_init();

#endif