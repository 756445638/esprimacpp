#include "character.h"
#include <map>
using namespace std;

bool Character::fromCodePoint(ts_number cp) {
    //todo::need implemention
    return false;
}

map<ts_number, bool> whiteSpaceChars;

//call before
void insertWhiteSpaceChars() {
    if (whiteSpaceChars.size() > 0) return;
    whiteSpaceChars.insert(make_pair(0x1680 , true));
    whiteSpaceChars.insert(make_pair(0x2000, true));
    whiteSpaceChars.insert(make_pair(0x2001, true));
    whiteSpaceChars.insert(make_pair(0x2002, true));
    whiteSpaceChars.insert(make_pair(0x2003, true));
    whiteSpaceChars.insert(make_pair(0x2004, true));
    whiteSpaceChars.insert(make_pair(0x2005, true));
    whiteSpaceChars.insert(make_pair(0x2006, true));
    whiteSpaceChars.insert(make_pair(0x2007, true));
    whiteSpaceChars.insert(make_pair(0x2008, true));
    whiteSpaceChars.insert(make_pair(0x2009, true));
    whiteSpaceChars.insert(make_pair(0x200A, true));
    whiteSpaceChars.insert(make_pair(0x202F, true));
    whiteSpaceChars.insert(make_pair(0x205F, true));
    whiteSpaceChars.insert(make_pair(0x3000, true));
    whiteSpaceChars.insert(make_pair(0xFEFF, true));
}




bool Character::isWhiteSpace(ts_number cp) {
    return (cp ==  0x20) || (cp ==  0x09) || (cp ==  0x0B) || (cp ==  0x0C) || (cp ==  0xA0) ||
        (cp >= 0x1680 && whiteSpaceChars [cp]);
}


bool Character::isLineTerminator(ts_number cp) {
    return (cp == 0x0A) || (cp ==  0x0D) || (cp ==  0x2028) || (cp == 0x2029);
}

bool Character::isIdentifierStart(ts_number cp) {
    return (cp ==  0x24) || (cp ==  0x5F) ||  // $ (dollar) and _ (underscore)
        (cp >= 0x41 && cp <= 0x5A) ||         // A..Z
        (cp >= 0x61 && cp <= 0x7A) ||         // a..z
        (cp ==  0x5C) ||                      // \ (backslash)
        ((cp >= 0x80) && false); // todo:: need implemetaton Regex.NonAsciiIdentifierStart.test(Character.fromCodePoint(cp)));
}


void character_init() {
    insertWhiteSpaceChars();
}